/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int total_test_cases;
	int total_tests_passed;
	int passed;

	total_test_cases = 17;
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

	/* Testing largest_prime_factor function */
	printf("%s\n", "Testing largest_prime_factor function... ");
	passed = largest_prime_factor_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing largest_prime_factor complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing is_palindrome function */
	printf("%s\n", "Testing is_palindrome function... ");
	passed = is_palindrome_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing is_palindrome complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing largest_palindrome_product function */
	printf("%s\n", "Testing largest_palindrome_product function... ");
	passed = largest_palindrome_product_all_tests();
	printf("%s%d\n", "Tests out of 1 passed: ", passed);
	printf("%s\n", "Testing largest_palindrome_product complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing other functions */

	/* Total test score */
	printf("%s\n", "Testing complete!");
	printf("%s%d\n", "Total number of test cases  : ", total_test_cases);
	printf("%s%d\n", "Total number of tests passed: ", total_tests_passed);

	return 0;
}