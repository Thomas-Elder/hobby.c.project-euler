/* solutions.c */

#include "solutions.h"
#include "utility.h"

void multiples_3_and_5() {

	/* local variables */
	int i, sum;

	/* print title and problem */
	printf("%s\n", "Multiples of 3 and 5");
	printf("%s\n", "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.");
	printf("%s\n", "");

	/* initilise */
	sum = 0;

	for (i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	/* print result */
	printf("%s%d\n", "The sum of multiples of 3 and 5 under 1000 is: ", sum);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}

void even_fibonacci_numbers() {

	/* local variables */
	int curr, prev, pprev, sum;

	/* print title and problem */
	printf("%s\n", "Even Fibonacci numbers");
	printf("%s\n%s\n%s\n", "Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:",
		"1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...",
		"By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.");
	printf("%s\n", "");

	/* initilise */
	sum = 0;
	prev = 0; 
	pprev = 0;
	curr = 1;

	while(curr < 4000000) {
		pprev = prev;
		prev = curr;
		curr = prev + pprev;

		if (curr % 2 == 0)
			sum += curr;
	}

	/* print result */
	printf("%s%d\n", "The sum of even Fibonacci numbers under 4 million is: ", sum);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}

void largest_prime_factor() {

	/* local variables */
	long long int number;
	int factor, limit, i;
	double square_root;

	/* print title and problem */
	printf("%s\n", "Largest Prime factor");
	printf("%s\n%s\n", "The prime factors of 13195 are 5, 7, 13 and 29.",
		"What is the largest prime factor of the number 600851475143?");

	/* initilise */
	number = 600851475143LL;

	/* Ok first off, let's find the square root of the number.
	 * The floor of this will be the highest factor we need to check
	 * for primeness, as once we get above the square root we'll start 
	 * repeating the smaller factors. */
	square_root = sqrt(number);
	limit = floor(square_root);
	factor = 1;

	/* Now we loop over integers from 3 up, checking first to see if they are
	 * a factor of our number, then checking for primeness. We can discard even
	 * numbers straight up. */
	for (i = 3; i < limit; i += 2) {

		/* We first check if i is a factor of the number */ 
		if (number % i == 0) {

			/* Then check if the number is prime, then assign it to the 
			 * factor var. It will always be the largest as we're working
			 * in ascending order */
			if (is_prime(i)) {
				factor = i;
			}
		}
	}

	/* print result */
	printf("%s%d\n", "The largest prime factor of 600851475143 is:", factor);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}

void largest_palindrome_product() {

	/* local variables */
	int i, j, result;

	/* print title and problem */
	printf("%s\n", "Largest palindrome product");
	printf("%s\n%s\n%s\n", "A palindromic number reads the same both ways.",
		"The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.",
		"Find the largest palindrome made from the product of two 3-digit numbers.");
	printf("%s\n", "");

	/* initilise */
	result = 0;

	for (i = 100; i < 1000; i++) {
		for (j = 100; j < 1000; j++) {
			if (is_palindrome(i * j)) {
				if (i * j > result) {
					result = i * j;
				}
			}
		}
	}

	/* print result */
	printf("%s%d\n", "The largest palimdromic product of two 3 digit numbers is: ", result);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}	

void smallest_multiple() {

	/* local variables */
	int i, j, result;

	/* print title and problem */
	printf("%s\n", "Smallest multiple");
	printf("%s\n%s\n", "2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.",
		"What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?");
	printf("%s\n", "");

	/* initilise */
	result = 0;

	for (i = 2520; i < 2147483647; i += 2520) {
		for (j = 20; j >= 10; j--) {
			if (i % j != 0)
				break;
		}

		printf("%s%d\n", "i = ", i);
		printf("%s%d\n", "result = ", result);

		if (j == 10) {
			result = i;
			break;
		}
	}


	/* print result */
	printf("%s%d\n", "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ", result);
	/*printf("%s\n", "Confirmed correct on Project Euler.");*/
	printf("%s\n", "");
}



