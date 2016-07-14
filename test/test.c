/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int total_test_cases;
	int total_tests_passed;
	int passed;

	total_test_cases = 4;
	total_tests_passed = 0;
	passed = 0;

	printf("%s\n", "");
	printf("%s\n", "T E S T I N G");
	printf("%s\n", "");

	/* Testing sum_multiples function */
	printf("%s\n", "Testing sum_multiples function... ");
	passed = sum_multiples_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing sum_multiples complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing sum_even_fibonacci_numbers function */
	printf("%s\n", "Testing sum_even_fibonacci_numbers function... ");
	passed = sum_even_fibonacci_numbers_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing sum_even_fibonacci_numbers complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing other functions */

	/* Total test score */
	printf("%s\n", "Testing complete!");
	printf("%s%d\n", "Total number of test cases  : ", total_test_cases);
	printf("%s%d\n", "Total number of tests passed: ", total_tests_passed);

	return 0;
}

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