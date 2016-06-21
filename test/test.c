/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int result_size = 10;
	int i;
	bool results[result_size];

	for (i = 0; i < result_size; i++)
		results[i] = false;

	printf("\n");
	printf("%s\n", "Welcome to testing for Tom's Project Euler solutions!");
	print_directory();

	printf("%s\n", "List of problems to test:");
	printf("%s\n", "1 - Multiples of 3 and 5");
	printf("%s\n", "2 - Even Fibonacci numbers");
	printf("%s\n", "3 - Largest Prime factor");
	printf("%s\n", "4 - Largest palindrome product");
	printf("%s\n", "5 - Smallest multiple");
	printf("%s\n", "6 - Sum square difference");
	printf("%s\n", "7 - 10001st prime");
	printf("%s\n", "8 - Largest product in a series");
	printf("%s\n", "9 - Special Pythagorean triplet");
	printf("%s\n", "10 - Summation of primes");

	results[0] = test_sum_multiples();
	results[1] = test_sum_even_fibonacci_numbers();
	results[2] = test_largest_prime_factor();
	results[3] = test_largest_palindrome_product();
	results[4] = test_smallest_multiple();
	results[5] = test_sum_square_difference();
	results[6] = test_nth_prime();
	results[7] = test_largest_product_in_a_series();
	results[8] = test_special_pythagorean_triplet();
	results[9] = 0;

	printf("\n");
	for (i = 0; i < result_size; i++) {
		if (results[i]) {
			printf("Problem %d passed.\n", i + 1);
		} else {
			printf("Problem %d failed.\n", i + 1);
		}
	}

	printf("\n");
	printf("%s\n", "Testing answer validation... ");

	printf("%s\n", "Testing question 5... ");

	if (test_check_answer(5, 232792560) == 1) 
		printf("%s\n", "Answer validation failed");
	else
		printf("%s\n", "Answer validation passed");

	printf("%s\n", "Testing question 30... ");

	if (test_check_answer(30, 443839) == 1) 
		printf("%s\n", "Answer validation failed");
	else
		printf("%s\n", "Answer validation passed");

	printf("%s\n", "Testing question 101... ");

	if (test_check_answer(101, 37076114526) == 1) 
		printf("%s\n", "Answer validation failed");
	else
		printf("%s\n", "Answer validation passed");

	printf("%s\n", "Testing is_prime function... ");

	if (test_is_prime(true, 2)) 
		printf("%s\n", "2 is a prime number correct ");

	if (test_is_prime(true, 17))
		printf("%s\n", "17 is a prime number correct");

	if (test_is_prime(false, 21))
		printf("%s\n", "21 is not prime correct");

	if (test_is_prime(true, 15485863))
		printf("%s\n", "15,485,863 is a prime number correct");

	if (test_is_prime(false	, 103841))
		printf("%s\n", "correct, 103841 is not prime");

	printf("%s\n", "Testing pythagorean_triplet function... ");

	if (test_pythagorean_triplet(true, 3, 4, 5))
		printf("%s\n", "correct, 3, 4, 5 is a Pythagorean Triplet");

	if (test_pythagorean_triplet(false, 5, 6, 7))
		printf("%s\n", "correct, 5, 6, 7 is not a Pythagorean Triplet");

	printf("\n");
	return 0;
}

/* test_sum_multiples
 *
 */
bool test_sum_multiples(void) {

	/* arrange */
	int expected, result;

	expected = 233168;
	result = 0;

	/* act */ 
	result = sum_multiples(3, 5, 1000);

	/* assert */
	return expected == result;
}

/* test_sum_even_fibonacci_numbers
 *
 */
bool test_sum_even_fibonacci_numbers(void) {

	/* arrange */
	int expected, result, limit;

	expected = 4613732;
	result = 0;
	limit = 4000000;

	/* act */ 
	result = sum_even_fibonacci_numbers(limit);

	/* assert */
	return expected == result;
}

/* test_largest_prime_factor
 *
 */
bool test_largest_prime_factor(void) {

	/* arrange */
	long long int expected, result, limit;

	expected = 6857;
	result = 0;
	limit = 600851475143;

	/* act */ 
	result = largest_prime_factor(limit);

	/* assert */
	return expected == result;
}

/* test_largest_palindrome_product
 *
 */
bool test_largest_palindrome_product(void) {

	/* arrange */
	int expected, result;

	expected = 906609;
	result = 0;

	/* act */ 
	result = largest_palindrome_product();

	/* assert */
	return expected == result;
}

/* test_smallest_multiple
 *
 */
bool test_smallest_multiple(void) {

	/* arrange */
	int expected, result;

	expected = 232792560;
	result = 0;

	/* act */ 
	result = smallest_multiple(10, 20);

	/* assert */
	return expected == result;
}

/* test_sum_square_difference
 *
 */
bool test_sum_square_difference(void) {

	/* arrange */
	int expected, result;

	expected = 25164150;
	result = 0;

	/* act */ 
	result = sum_square_difference(100);

	/* assert */
	return expected == result;
}

/* test_nth_prime
 *
 */
bool test_nth_prime(void) {

	/* arrange */
	int expected, result;

	expected = 104743;
	result = 0;

	/* act */ 
	result = nth_prime(10001);

	printf("Nth prime is %d\n", result);

	/* assert */
	return expected == result;
}

/* test_largest_product_in_a_series
 *
 */
bool test_largest_product_in_a_series(void) {

	/* arrange */
	long long int expected, result;

	char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt";

	expected = 23514624000;
	result = 0LLU;

	/* act */ 
	result = largest_product_in_a_series(filepath, 13);

	/* assert */
	return expected == result;
}

/* test_special_pythagorean_triplet;
 *
 */
bool test_special_pythagorean_triplet(void) {

	/* arrange */
	int limit, expected, result;

	limit = 12;
	expected = 60;
	result = 0;

	/* act */ 
	result = special_pythagorean_triplet(limit);

	printf("%s - %d\n", "The result was", result);
	printf("%s - %d\n", "We wanted", expected);

	/* assert */
	return expected == result;
}

bool test_check_answer(int question, long long int answer) {

	/* arrange */
	long long int expected, result;

	/* act */ 
	expected = 0;
	result = 1;

	result = check_answer(question, answer);

	/* assert */
	return expected == result;
}


bool test_is_prime(bool expected, int number) {

	/* arrange */
	bool result;

	/* act */
	result = is_prime(number);

	/* assert */ 
	return result == expected;
}

bool test_pythagorean_triplet(bool expected, int a, int b, int c) {

	/* arrange */
	bool result;

	/* act */
	result = pythagorean_triplet(a, b, c);

	/* assert */
	return result == expected; 
}
