/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int total_test_cases;
	int total_tests_passed;
	int passed;

	total_test_cases = 47;
	total_tests_passed = 0;
	passed = 0;

	printf("%s\n", "");
	printf("%s\n", "T E S T I N G");
	printf("%s\n", "");

	/* Testing solutions.c functions */
	printf("%s\n", "Testing solutions.c functions...");

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

	/* Testing largest_palindrome_product function */
	printf("%s\n", "Testing largest_palindrome_product function... ");
	passed = largest_palindrome_product_all_tests();
	printf("%s%d\n", "Tests out of 1 passed: ", passed);
	printf("%s\n", "Testing largest_palindrome_product complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing smallest_multiple function */
	printf("%s\n", "Testing smallest_multiple function... ");
	passed = smallest_multiple_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing smallest_multiple complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing sum_square_difference function */
	printf("%s\n", "Testing sum_square_difference function... ");
	passed = sum_square_difference_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing sum_square_difference complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing nth_prime function */
	printf("%s\n", "Testing nth_prime function... ");
	passed = nth_prime_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing nth_prime complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing largest_product_in_a_series function */
	printf("%s\n", "Testing largest_product_in_a_series function... ");
	passed = largest_product_in_a_series_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing largest_product_in_a_series complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing special_pythagorean_triplet function */
	printf("%s\n", "Testing special_pythagorean_triplet function... ");
	passed = special_pythagorean_triplet_all_tests();
	printf("%s%d\n", "Tests out of 1 passed: ", passed);
	printf("%s\n", "Testing special_pythagorean_triplet complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing utility.c functions */
	printf("%s\n", "Testing utility.c functions...");

	/* Testing is_palindrome function */
	printf("%s\n", "Testing is_palindrome function... ");
	passed = is_palindrome_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing is_palindrome complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing is_prime function */
	printf("%s\n", "Testing is_prime function... ");
	passed = is_prime_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing is_prime complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing pythagorean_triplet function */
	printf("%s\n", "Testing pythagorean_triplet function... ");
	passed = pythagorean_triplet_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing pythagorean_triplet complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing check_answer function */
	printf("%s\n", "Testing check_answer function... ");
	passed = check_answer_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing check_answer complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Testing working_directory function */
	printf("%s\n", "Testing working_directory function... ");
	passed = working_directory_all_tests();
	printf("%s%d\n", "Tests out of 4 passed: ", passed);
	printf("%s\n", "Testing working_directory complete.");
	printf("%s\n", "");

	total_tests_passed += passed;

	/* Total test score */
	printf("%s\n", "Testing complete!");
	printf("%s%d\n", "Total number of test cases  : ", total_test_cases);
	printf("%s%d\n", "Total number of tests passed: ", total_tests_passed);

	return 0;
}