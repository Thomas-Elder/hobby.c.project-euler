/* utility.c */

#include "utility.h"

/* is_prime
 * This function returns true if the number is prime, and 
 * false if it is not. 
 */
bool is_prime(int value) {
	int i;

	printf("%s%d\n", "value in is_prime: ", value);

	for (i = 2; i < value; i++) {

		printf("%s%d%s%d\n", "value % ", i, " = ", value % i);

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
bool is_palindrom(int value) {
	return false;
}