/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int total_test_cases;
	int total_tests_passed;
	int pass;

	total_test_cases = 4;
	total_tests_passed = 0;
	pass = 0;

	printf("%s\n", "");
	printf("%s\n", "T E S T I N G");
	printf("%s\n", "");

	/* Testing sum_multiples function */
	printf("%s\n", "Testing sum_multiples function... ");
	pass = sum_multiples_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", pass);
	printf("%s\n", "Testing sum_multiples complete.");
	printf("%s\n", "");

	total_tests_passed += pass;

	/* Testing other functions */

	/* Total test score */
	printf("%s\n", "Testing complete!");
	printf("%s%d\n", "Total number of test cases  : ", total_test_cases);
	printf("%s%d\n", "Total number of tests passed: ", total_tests_passed);

	return 0;
}

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
	expected = 76;
	result = sum_multiples(4, 6, 20);

	if (result != expected) {
		printf("%s\n", "Test 3 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	/* test 4 */
	expected = 126;
	result = sum_multiples(3, 7, 23);

	if (result != expected) {
		printf("%s\n", "Test 4 Failed!");
		printf("%s%d%s%d\n", "Expected: ", expected, ". Result: ", result);
	} else {
		tests_passed++;
	}

	return tests_passed;
}