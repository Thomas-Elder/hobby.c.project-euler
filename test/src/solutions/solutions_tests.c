/* solutions_tests.c */

#include "solutions_tests.h"

/* sum_multiples_all_tests
 *
 */
int sum_multiples_all_tests(void){

	/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 23;
	result = sum_multiples(3, 5, 10);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 233168;
	result = sum_multiples(3, 5, 1000);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = 64;
	result = sum_multiples(4, 6, 20);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 105;
	result = sum_multiples(3, 7, 23);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* sum_even_fibonacci_numbers_all_tests
 *
 */
int sum_even_fibonacci_numbers_all_tests(void) {

	/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 4613732;
	result = sum_even_fibonacci_numbers(4000000);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 44;
	result = sum_even_fibonacci_numbers(50);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = 44;
	result = sum_even_fibonacci_numbers(100);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 798;
	result = sum_even_fibonacci_numbers(1000);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* largest_prime_factor_all_tests
 *
 */
int largest_prime_factor_all_tests(void) {

	/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 29;
	result = largest_prime_factor(13195);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 6857;
	result = largest_prime_factor(600851475143);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected =167;
	result = largest_prime_factor(334);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 7;
	result = largest_prime_factor(5040);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* largest_palindrome_product_all_tests
 *
 */
int largest_palindrome_product_all_tests(void) {

	/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 906609;
	result = largest_palindrome_product();

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* Currently the largest_palindrome_product function takes no parameters,
	 * so it's not possible to test other values here.
	 *
	 test 2 
	expected = true;
	result = is_palindrome(660066);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	 test 3 
	expected = false;
	result = is_palindrome(66006);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	 test 4 
	expected = false;
	result = is_palindrome(1111112);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}
  */

	return tests_passed;
}

/* smallest_multiple_all_tests
 *
 */
int smallest_multiple_all_tests(void) {

		/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 2520;
	result = smallest_multiple(1, 10);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 232792560;
	result = smallest_multiple(1, 20);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = 60;
	result = smallest_multiple(1, 5);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 420;
	result = smallest_multiple(1, 7);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* sum_square_difference_all_tests
 *
 */
int sum_square_difference_all_tests(void) {

		/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 2640;
	result = sum_square_difference(10);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 25164150;
	result = sum_square_difference(100);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected =170;
	result = sum_square_difference(5);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 4;
	result = sum_square_difference(2);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* nth_prime_all_tests
 *
 */
int nth_prime_all_tests(void) {

		/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 13;
	result = nth_prime(6);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 104743;
	result = nth_prime(10001);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = 5;
	result = nth_prime(3);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 19;
	result = nth_prime(8);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* largest_product_in_a_series_all_tests
 *
 */
int largest_product_in_a_series_all_tests(void) {

		/* local variables */
	int tests_passed;
	long long int expected;
	long long int result;

	tests_passed = 0;

	/* test 1 */
	expected = 5832LLU;
	result = largest_product_in_a_series("E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt", 4);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%llu%s%llu\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = 23514624000LLU;
	result = largest_product_in_a_series("E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt", 13);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%llu%s%llu\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = 9LLU;
	result = largest_product_in_a_series("E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt", 1);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%llu%s%llu\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */ 
	expected = 81LLU;
	result = largest_product_in_a_series("E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt", 2);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%llu%s%llu\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* special_pythagorean_triplet_all_tests
 *
 */
int special_pythagorean_triplet_all_tests(void) {

		/* local variables */
	int tests_passed;
	int expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = 31875000;
	result = special_pythagorean_triplet(1000);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}