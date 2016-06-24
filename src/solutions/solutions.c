/* solutions.c */

#include "solutions.h"

/* sum_multiples
 * 
 */
int sum_multiples(int a, int b, int limit) {

	/* local variables */
	int i, sum;

	/* initilise */
	sum = 0;

	/* */
	for (i = 1; i < limit; i++) {
		if (i % a == 0 || i % b == 0) {
			sum += i;
		}
	}

	return sum;
}

/* even_fibonacci_numbers
 *
 */
int sum_even_fibonacci_numbers(int limit) {

	/* local variables */
	int curr, prev, pprev, sum;

	/* initilise */
	sum = 0;
	prev = 0; 
	pprev = 0;
	curr = 1;

	while(curr < limit) {
		pprev = prev;
		prev = curr;
		curr = prev + pprev;

		if (curr % 2 == 0)
			sum += curr;
	}
	
	return sum;
}

/* largest_prime_factor
 *
 * This function finds the largest prime factor of the given number.
 *
 * Working from 3 up, going by twos to avoid even numbers, we loop for 
 * i checking first that it divides the number without remainder, then
 * check for primeness. 
 *
 * If the value of i is both a factor and prime, it is saved as the 
 * result, and the loop continues. In this way the last value saved 
 * as the result will be the highest value. 
 */
int largest_prime_factor(long long int number) {

	/* local variables */
	int result, limit, i;
	double square_root;


	/* initilise */

	/* Ok first off, let's find the square root of the number.
	 * The floor of this will be the highest factor we need to q
	 * for primeness, as once we get above the square root we'll start 
	 * repeating the smaller factors. */
	square_root = sqrt(number);
	limit = floor(square_root);
	result = 1;

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
				result = i;
			}
		}
	}

	return result;
}

/* largest_palindrome_product
 *
 * This function loops over numbers 100 - 1000 for i and j, testing to see 
 * if their product is palindromic. If so the product is set as the result
 * and the loops continue until the limit is hit. 
 *
 * In this way the last product set as the value of result, will be the 
 * the highest value. 
 */
int largest_palindrome_product() {

	/* local variables */
	int i, j, result;

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

	return result;
}	

/* smallest_multiple
 *
 */
int smallest_multiple(int low, int high) {

	/* local variables */
	int i, j, result;

	/* initilise */
	result = 0;

	for (i = 2520; i < 2147483647; i+=2520) {
		for (j = high; j > low; j--) {
			if (i % j != 0)	{
				break;
			}
		}

		if (j == low) {
			result = i;
			break;
		}
	}

	return result;
}

/* sum_square_difference
 *
 */
int sum_square_difference(int limit) {

	/* local variables */
	int i, sumsquare, squaresum;

	/* initilise */
	sumsquare = 0;
	squaresum = 0;

	/* go */
	for (i = 1; i <= limit; i++) {
		sumsquare += i*i;
		squaresum += i;
	}
	
	squaresum = squaresum*squaresum;

	return squaresum - sumsquare;
}

/* ten_thousand_and_first_prime
 *
 */
int nth_prime(int n) {

	/* local variables */
	int i, count;

	/* initilise */
	count = 1;
	i = 2;

	/* go */
	while (count != n + 1) {

		if (is_prime(i++))
			count++;
	}

	return i - 1;
}

/* largest_product_in_a_series
 *
 */
long long int largest_product_in_a_series(char *filepath, int product_count) {

	/* local variables */
	int start, end, i;
	uint64_t result, product;
	char c;
	int series[1000];

	FILE *fp;

	/* initilise */
	start = 0;
	i = 0;
	end = product_count - 1;
	
	result = 0LLU;
	product = 0LLU;

	fp = fopen(filepath, "r");

	if (fp == NULL) {
		printf("%s\n", "File pointer is null");
	} else {

		/* Read chars from file and convert to ints */
		while ((c = getc(fp)) != EOF)
			series[i++] = c - '0';

		while (end != 1000) {

			product = 1;

			for (i = start; i <= end; i++) {
				product *= series[i];
			}

			if (product > result)
				result = product;

			start++;
			end++;
		}
	}

	return result;
}

/* special_pythagorean_triplet
 *
 */
int special_pythagorean_triplet(int limit) {
	/* local variables */
	int a, b, c, third_limit, result;

	third_limit = (limit / 3) + 2;
	result = 0;

	for (a = 4; a < third_limit; a++) {
		for (b = 5; b < third_limit; b++) {
			for (c = 6; c < third_limit; c++) {
				if (pythagorean_triplet(a, b, c)) {
					if (a + b + c == limit)
						result = a * b * c;
				}
			}
		}
	}

	return result;
}