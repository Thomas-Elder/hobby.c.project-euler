/* solutions.c */

#include "solutions.h"

/* sum_multiples
 * 
 * This function returns the sum of the multiples of a and b, 
 * which are less than the limit. 
 *
 * We iterate over i from 1 to the limit (exclusive), and add it 
 * to the sum if it is evenly divisible by a or b. 
 *
 * Once i is greater than the limit the sum is returned. 
 */
int sum_multiples(int a, int b, int limit) {

	/* local variables */
	int i, sum;

	/* initilise */
	sum = 0;

	/* */
	for (i = 1; i < limit; i++) {

		if (i % a == 0 || i % b == 0)
			sum += i;
	}

	return sum;
}

/* even_fibonacci_numbers
 *
 * This function sums the even numbers in the Fibonacci sequence 
 * up to some limit.
 *
 * This one is pretty straight forward, we step through the sequence
 * using 3 variables to keep track of the 2 previous numbers in the 
 * sequence, and the current one. We test each current value for 
 * evenness, then add it to the sum if it is. 
 *
 * sum is then returned once value of the current element in the 
 * sequence exceeds the limit value.
 */
int sum_even_fibonacci_numbers(int limit) {

	/* local variables */
	int curr, prev, pprev, sum;

	/* initilise */
	sum = 0;
	prev = 0; 
	pprev = 0;
	curr = 1;

	/* */
	while(curr < limit) {

		if (curr % 2 == 0)
			sum += curr;

		pprev = prev;
		prev = curr;
		curr = prev + pprev;
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
 * This function returns the smallest positive number which is divisible 
 * by all numbers between (inclusive) low and high. 
 *
 * This is currently gamed a bit. The Project Euler example gives us the 
 * smallest number divisible by the numbers 1-10 as 2520. The problem given
 * is to find the smallest number divisible by the numbers 1-20, so I used
 * the example to shorten the runtime a bit, by starting at 2520, and 
 * incrementing by 2520, as adding any number less than 2520 to a multiple
 * of 2520 would give a number not divisible by some number 1-10. 
 *
 * So for each number i > 2520 and a multiple of 2520, and j equal to the higher 
 * limit, we check if j divides the number evenly, if not we break immediately 
 * from the inner loop. For example if we had j = 20, and the number i was not
 * divisible by 20, there would be no need to check j = 19, so we break.
 *
 * If i is divisible by j, we decrement j and test again. In this manner we 
 * check each value of j from high to low, until j == low, at which point we 
 * know that all numbers between low and high divide the number i without
 * remainder and we can return the number i as the result. 
 *
 * Would be good to re-write this soon to be a bit more generic. 
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
 * This function returns the difference between the square of the sum  
 * and the sum of the squares, of the natural numbers up to the limit. 
 *
 * We loop over i from 1 to the limit (inclusive) and keep a running total
 * of two things. One we add the square of i to the sumsquare variable, to 
 * give us the value of the sum of the squares of this sequence. Secondly
 * we simply add i to the squaresum variable, for squaring once the loop
 * is complete. 
 * 
 * Once we've hit the limit we square the squaresum variable, to get the
 * square of the sum of this sequence. 
 *
 * Then we return the difference between squaresum and sumsquare.
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
 * This function returns the 10001st prime number. It does this by testing
 * incrementing values of i for primeness and increasing a counter variable
 * for each number found to be prime. 
 * 
 * Once the counter has met the target limit 'n', we return the value of i.
 */
int nth_prime(int n) {

	/* local variables */
	int i, count;

	/* initilise */
	count = 1;
	i = 1;

	/* go */
	while (count <= n) {

		if (is_prime(++i))
			count++;
	}

	return i;
}

/* largest_product_in_a_series
 *
 * This function returns the largest product of a specified number of consecutive
 * integers in a series of integers. These are expected to be in some file (path
 * is a parameter), contain no data other than the integers in the series to be 
 * parsed.
 *
 * Currently a 1000 length series is expected and that value is hardcoded into the
 * the function.
 *
 * We consider 13 sequential digits in turn, checking their product and saving it
 * in 'result' if it is higher than previous products. So we maintain two integer values 'start'
 * and 'end' which refer to the first and last index of the range we're currently 
 * examining.
 * 
 * We then loop over the indecies from start to end, multiplying each value to get
 * the product. If that product is higher than the current 'result', then we set
 * the result to that value.
 *
 * Then start and end are incremented to examine the next sequence of digits.
 *
 * Finally we return the value of 'result'.
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
 * This function returns the product of 3 integers who form a Pythagorean Triplet, 
 * and whose sum is equal to 1000. 
 *
 * Currently this is failing.
 *
 * But the idea is to start from a=4, b=5, c=6. Then iterating over increasing values
 * for each, first check if they form a Pythagorean Triplet, then if their sum equals
 * the limit value, then finally save their product in result.
 *
 * Then return result.
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