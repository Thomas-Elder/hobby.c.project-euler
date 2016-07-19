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