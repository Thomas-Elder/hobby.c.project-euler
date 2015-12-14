/* solutions.c */

#include "solutions.h"

/* sum_multiples
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

/*
 *
 */
int even_fibonacci_numbers(int limit) {

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

/*
 *
 */
int largest_prime_factor() {

	/* local variables */
	long long int number;
	int factor, limit, i;
	double square_root;


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

	return factor;
}

/*
 *
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

/*
 *
 */
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

	for (i = 2520; i < 2147483647; i+=2520) {
		for (j = 20; j > 10; j--) {
			if (i % j != 0)	{
				break;
			}
		}

		printf("%s%d\n", "i = ", i);
		printf("%s%d\n", "j = ", j);
		printf("%s%d\n", "result = ", result);

		if (j == 10) {

			printf("%s%d\n", "result: ", i);

			result = i;
			break;
		}
	}

	/* print result */
	printf("%s%d\n", "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ", result);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}

/*
 *
 */
void sum_square_difference() {

	/* local variables */
	int i, n, sumsquare, squaresum, result;

	/* print title and problem */
	printf("%s\n", "Sum square difference");
	printf("%s\n%s\n\n%s\n%s\n\n%s\n%s", 
		"The sum of the squares of the first ten natural numbers is,",
		"1^2 + 2^2 + ... + 10^2 = 385",
		"The square of the sum of the first ten natural numbers is,",
		"(1 + 2 + ... + 10)^2 = 55^2 = 3025",
		"Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.",
		"Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.");
	printf("%s\n", "");

	/* initilise */
	n = 100;
	sumsquare = 0;
	squaresum = 0;
	result = 0;

	/* go */
	for (i = 1; i <= n; i++) {
		sumsquare += i*i;
		squaresum += i;
	}
	
	squaresum = squaresum*squaresum;

	printf("%s%d\n", "Sum of the squares is: ", sumsquare);
	printf("%s%d\n", "Square of the sum is: ", squaresum);

	result = squaresum - sumsquare;

	/* print result */
	printf("%s%d\n", "The difference between the sum of the squares and the square of the sum of the first one hundred natural numbers is: ", result);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}

/*
 *
 */
void ten_thousand_and_first_prime() {

	/* local variables */
	int i, count, result;

	/* print title and problem */
	printf("%s\n", "10001st prime");
	printf("%s\n%s\n", 
		"By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.",
		"What is the 10 001st prime number?");
		printf("%s\n", "");

	/* initilise */
	count = 1;
	result = 0;
	i = 2;

	/* go */
	while (count != 10002) {

		if (i > 2 && i % 2 == 0) {
		} else {
			if (is_prime(i)) {
				result = i;
				count++;
			}
		}

		i++;
	}

	/* print result */
	printf("%s%d\n", "the 10 001st prime number is: ", result);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");

}

/*
 *
 */
void largest_product_in_a_series() {

	/* local variables */
	int start, end, i;
	uint64_t result, product;
	char c;
	int series[1000];

	FILE *fp;

	/* print title and problem */
	printf("%s\n", "Largest product in a series");
	printf("%s\n%s\n", 
		"The four adjacent digits in the 1000-digit number that have the greatest product are 9 - 9 - 8 - 9 = 5832.",
		"Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?");
		printf("%s\n", "");

	/* initilise */
	start = 0;
	i = 0;
	end = 12;
	
	result = 0LLU;
	product = 0LLU;

	fp = fopen("E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt", "r");

	if (fp == NULL) {
		printf("%s\n", "File pointer is null");
	} else {

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

	/* print result */
	printf("%s%llu\n", "Largest product in this series is: ", result);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}