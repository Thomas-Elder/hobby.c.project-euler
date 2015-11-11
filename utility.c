/* utility.c */

#include "utility.h"

/* is_prime
 * This function returns true if the number is prime, and 
 * false if it is not. 
 */
bool is_prime(int value) {

	/* local variables */
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
bool is_palindrome(int value) {

	/* local variables */
	int reverse;

	reverse = reverse_int(value);

	if (value == reverse) {

		printf("%d%s%d\n", value, " == ", reverse);

		return true;
	}

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