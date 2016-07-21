/* utility_tests.c */

#include "utility_tests.h"

/* is_palindrome_all_tests
 *
 */
int is_palindrome_all_tests(void) {

	/* local variables */
	int tests_passed;
	bool expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = true;
	result = is_palindrome(999);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = true;
	result = is_palindrome(660066);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = false;
	result = is_palindrome(66006);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = false;
	result = is_palindrome(1111112);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* is_prime_all_tests
 *
 */
int is_prime_all_tests(void) {

	/* local variables */
	int tests_passed;
	bool expected;
	int result;

	tests_passed = 0;

	/* test 1 */
	expected = true;
	result = is_prime(2);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = true;
	result = is_prime(67);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = false;
	result = is_prime(1099);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = false;
	result = is_prime(5040);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* pythagorean_triplet_all_tests
 *
 */
int pythagorean_triplet_all_tests(void) {

	/* local variables */
	int tests_passed;
	bool expected;
	bool result;

	tests_passed = 0;

	/* test 1 */
	expected = true;
	result = pythagorean_triplet(3, 4, 5);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = false;
	result = pythagorean_triplet(5, 4, 3);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = true;
	result = pythagorean_triplet(20, 21, 29);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = true;
	result = pythagorean_triplet(68, 285, 293);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* check_answer_all_tests
 *
 */
int check_answer_all_tests(void) {

	/* local variables */
	int tests_passed;
	bool expected;
	bool result;

	tests_passed = 0;

	/* test 1 */
	expected = true;
	result = check_answer(1, 233168);

	if (result != expected) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 2 */
	expected = false;
	result = check_answer(1, 5);

	if (result != expected) {
		printf("%s\n", "Test 2 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 3 */
	expected = false;
	result = check_answer(15, 5);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = true;
	result = check_answer(270, 82282080);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}

/* working_directory_all_tests
 *
 */
int working_directory_all_tests(void) {
	
	/* local variables */
	int tests_passed;
	char *expected;
	char result[FILENAME_MAX];

	tests_passed = 0;

	/* test 1 */
	expected = "E:\\c\\practice\\Project Euler";
	working_directory(result);

	if (strcmp(result, expected)) {
		printf("%s\n", "Test 1 Failed!");
		printf("%s%s%s%s\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}