/* project_euler.c */

#include "project_euler.h"

int main(void) {

	/* local variables */
	char buffer[256];
	int input;

	input = -1;

	while (input != 0){

		/* menu */
		printf("%s\n", "");
		printf("%s\n", "Welcome to Tom's Project Euler solutions!");
		printf("%s\n", "Please select from the following solutions:");
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
		printf("%s\n", "11 - Largest product in a grid");
		printf("%s\n", "12 - Highly divisible triangular number");
		printf("%s\n", "0 - Exit");
		printf("%s\n", "");

		fgets(buffer, MAXINT, stdin);
		read_rest_of_line();
		input = atoi(buffer);

		switch (input) {
			case 1:
				multiples_3_and_5();
				break;
			case 2:
				even_fibonacci_numbers();
				break;
			case 3:
				largest_prime_factor();
				break;
			case 4:
				largest_palindrome_product();
				break;
			case 5:
				smallest_multiple();
				break;
			case 6:
				sum_square_difference();
				break;
			case 7:
				ten_thousand_and_first_prime();
				break;
			case 0:
				return 0;
			default:
				printf("%s\n", "Solution not yet implemented.");
				break;
		}
	}

	return 0;
}

