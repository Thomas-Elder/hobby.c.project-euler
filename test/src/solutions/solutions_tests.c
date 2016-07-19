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