/* utility.c */

#include "utility.h"

/* Function Definitions */

/* is_prime
 * This function returns true if the number is prime, and 
 * false if it is not. 
 */
bool is_prime(int value) {

	/* local variables */
	int i;

	for (i = 2; i < value; i++) {

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
void read_rest_of_line(void)
{
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