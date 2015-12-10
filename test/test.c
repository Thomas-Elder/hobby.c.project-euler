/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int i;
	int results[8];

	for (i = 0; i < 8; i++)
		results[i] = 1;

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

	results[0] = test_problem_1();
	results[1] = test_problem_2();

	printf("\n");
	for (i = 0; i < 8; i++) {
		if (results[i] == 0) {
			printf("Problem %d passed.\n", i + 1);
		} else {
			printf("Problem %d failed.\n", i + 1);
		}
	}

	return 0;
}

int test_problem_1(void) {
	return 0;
}

int test_problem_2(void) {
	return 0;
}