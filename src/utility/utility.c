/* utility.c */

#include "utility.h"

/* Function Definitions */

/* is_prime
 * This function returns true if the number is prime, and 
 * false if it is not.
 * 
 * This function first checks if the value is 2 or 3, to get prime numbers < 6
 * out of the way.
 *
 * Then checks if the value is divisible by 2 or 3.
 *
 * Then as all prime numbers are of the form (6k +/- 1) we can step through 
 * a loop of i from i = 5 up to sqrt(value), and check if i or i + 2 is
 * a factor of the value.
 *
 * I initially found a solution involving this equation here:
 * http://stackoverflow.com/questions/1538644/c-determine-if-a-number-is-prime
 *
 * Where the idea that every* integer can be expresses as (6k + i), for some k,
 * and for some i equal to -1:3.
 *
 * More on this here:
 * https://www.quora.com/Is-every-prime-number-other-than-2-and-3-of-the-form-6k%C2%B11
 *
 */
bool is_prime(int value) {

	/* local variables */
	double square_root;
	int i, limit;

	square_root = sqrt(value);
	limit = floor(square_root);

	if (value == 2 || value == 3)
		return true;

	if (value % 2 == 0 || value % 3 == 0)
		return false;

	for (i = 5; i <= limit; i += 6) {

		if (value % i == 0 || value % (i + 2) == 0)
			return false;
	}

	return true;
}

/* pythagorean_triplet
 *
 * This function first tests whether a < b < c holds for the three
 * given integers, returns false if not.
 *
 * It then tests whether a^2 + b^2 = c^2 and returns false if this fails.
 * 
 * Otherwise, it returns true.
 */
bool pythagorean_triplet(int a, int b, int c){
	
	if (a >= b || a >= c || b >= c)
		return false;
	
	if (a*a + b*b != c*c)
		return false;

	return true;
}

/* is_palindromic
 *
 * This function uses the modulo arithmetic to generate a digitally
 * reversed version of the value passed. It then checks if they are
 * equivalent and returns true if so.
 */
bool is_palindrome(int value) {

	/* local variables */
	int forward, reverse, remain;

	forward = value;
	reverse = 0;

	while (forward > 0) {
		remain = forward % 10;
		reverse = (reverse * 10) + remain;
		forward = forward / 10;
	}

	if (value == reverse) 
		return true;

	return false;
}

/* read_rest_of_line
 *
 * This function reads characters from the standard input until there are 
 * no characters left to read. This is so when someone enters 5 chars, when
 * you only need 2, the remaining 3 chars are read from the input buffer, and
 * aren't read into subsequent input reads.
 */
void read_rest_of_line(void) {
	/* local variables */
    int ch;

    /* read characters one at a time from standard input until there are
     * no characters left to read
     */
    while (ch=getc(stdin), ch!=EOF && ch!='\n'){
        /*printf("%s : %c\n", "Reading from buffer character", ch);*/
    }
    
    /* reset the error status of the input FILE pointer */
    clearerr(stdin);
}

/* print_directory
 *
 * Prints the directory from which the program is being run.
 */
void print_directory(void) {

	/* local variables */
	char cCurrentPath[FILENAME_MAX];

	working_directory(cCurrentPath);

	printf("%s%s\n", "This program is being run from: ", cCurrentPath);
}


/* working_directory
 *
 * Gets the working directory.
 *
 * Note this is not the directory where the executable lives, but where the 
 * executable was called from. 
 */
void working_directory(char *c) {

	char working_directory[FILENAME_MAX];

 	if (!GetCurrentDir(working_directory, sizeof(working_directory)))
     	printf("%s\n", "Error!");

    working_directory[sizeof(working_directory) - 1] = '\0'; /* not really required */

    strcpy(c, working_directory);
}

/* get_input
 *
 * Reads chars from stdin until newline char is entered, at which point 
 * it attempts to convert the chars entered to an int and saves it to the 
 * the pointer passed.
 */
void get_input(int *input) {

	/* local variables */
	int i, c;
	char buffer[256];

	i = 0;

	while ((c = getc(stdin)) != '\n')
		buffer[i++] = c;

	*input = atoi(buffer);
}

/* get_input_ll
 *
 * Reads chars from stdin until newline char is entered, at which point 
 * it attempts to convert the chars entered to a long long int and saves
 * it to the the pointer passed.
 */
void get_input_ll(long long int *input) {

	/* local variables */
	int i, c;
	char buffer[256];

	i = 0;

	while ((c = getc(stdin)) != '\n')
		buffer[i++] = c;

	*input = atoll(buffer);
}

/* check_answer
 *
 * This function uses the defined term ANSWER_FILEPATH to read from a text
 * file containing the answers to the problems.
 *
 * The function expects the format to be
 * <question><'.'><' '><answer>
 * where the question is some string parseable as an integer, and the answer
 * is some string parseable as a long long int.
 *
 * It reads chars until the first '.' into a buffer and attempts to convert
 * them into an integer.
 *
 * It then checks if this matches the question parameter, if not reads the rest
 * of the line and begins again. 
 *
 * If it does match, the succeeding chars are read into the buffer and
 * this buffer is converted into a long long int.
 *
 * The function returns true if this value matches the answer parameter.
 */
bool check_answer(int question, long long int answer) {

	/* local variables */
	FILE *fp;
	char buffer[256];
	char c;
	int i;

	fp = fopen(ANSWER_FILEPATH, "r");
	i = 0;
	c = '0';

	if (fp == NULL) {

		printf("%s\n", "File pointer is null");
	} else {

		while (c != EOF) {

			/* First get the answer number */
			while ((c = getc(fp)) != '.') 
				buffer[i++] = c;

			/* terminate the string */
			buffer[i] = '\0';

			/**/
			if (question == atoi(buffer)) {

				/* back to the start of the buffer */
				i = 0;

				/* move the pointer passed the point, and space */
				/*while ((c = getc(fp)) != '.');*/
				getc(fp);

				/* read into the buffer the rest of the line */
				while ((c = getc(fp)) != '\n')
					buffer[i++] = c;

				/* terminate the string */
				buffer[i] = '\0';

				if (answer == atoll(buffer))
					return true;

				break;
			}

			/* This isn't the question we're after so */
			/* reset buffer point */
			i = 0;

			/* then read out the line */
			while ((c = getc(fp)) != '\n');
		}
	}

	return false;
}
