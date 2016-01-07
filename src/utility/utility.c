/* utility.c */

#include "utility.h"

/* Function Definitions */

/* is_prime
 * This function returns true if the number is prime, and 
 * false if it is not. 
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

	for (i = 5; i <= limit; i += 2) {

		if (value % i == 0)
			return false;
	}

	return true;
}

/* is_palindromic
 * This function returns true if the number is a palindrome, ie 
 * it's digits in reverse order are the same.
 * Returns false if not.
 */
bool is_palindrome(int value) {

	/* local variables */
	int reverse;

	reverse = reverse_int(value);

	if (value == reverse) 
		return true;

	return false;
}

/* reverse_int
 * This function returns an integer with digits in reverse order to 
 * the value passed. */
int reverse_int(int value) {

	/* local variables */
	int forward, reverse, remain;

	forward = value;
	reverse = 0;

	while (forward > 0) {
		remain = forward % 10;
		reverse = (reverse * 10) + remain;
		forward = forward / 10;
	}

	return reverse;
}

/* read_rest_of_line
 * This function reads characters from the standard input until there are 
 * no characters left to read. This is so when someone enters 5 chars, when
 * you only need 2, the remaining 3 chars are read from the input buffer, and
 * aren't read into subsequent input reads. */
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
 * Prints the directory from which the program is being run.
 */
void print_directory(void) {

	/* local variables */
	char cCurrentPath[FILENAME_MAX];

	working_directory(cCurrentPath);

	printf("%s%s\n", "This program is being run from: ", cCurrentPath);
}


/* working_directory
 * Gets the working directory.
 */
void working_directory(char *c) {

	char working_directory[FILENAME_MAX];

 	if (!GetCurrentDir(working_directory, sizeof(working_directory)))
     	printf("%s\n", "Error!");

    working_directory[sizeof(working_directory) - 1] = '\0'; /* not really required */

    strcpy(c, working_directory);
}

/* get_input
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

/* get_input
 * Reads chars from stdin until newline char is entered, at which point 
 * it attempts to convert the chars entered to an int and saves it to the 
 * the pointer passed.
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

int check_answer(int question, long long int answer) {

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
					return 0;

				break;
			}

			/* This isn't the question we're after so */
			/* reset buffer point */
			i = 0;

			/* then read out the line */
			while ((c = getc(fp)) != '\n');
		}
	}

	return 1;
}
