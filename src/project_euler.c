/* project_euler.c */

#include "project_euler.h"

int main(void) {

	/* local variables */
	int input;

	printf("%s\n", "");
	printf("%s\n", "Welcome to Tom's Project Euler solutions!");
	print_directory();

	input = -1;

	while (input != 0){

		/* menu */
		printf("%s\n", "");
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

		get_input(&input);

		solutions(input);
	}

	return 0;
}

void solutions(int menuChoice) {

	switch (menuChoice) {
		case 1:
			problem_1();
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
		case 8:
			largest_product_in_a_series();
			break;
		case 0:
			break;	
		default:
			printf("%s\n", "Solution not yet implemented.");
			break;
	}
}

void problem_1() {

	/* local variables */
	int a, b, limit, input;
	
	a = 0;
	b = 0;
	limit = 0;
	input = 0;

	/* print title and problem */
	printf("%s\n", "Sum the multiples of two numbers.");
	printf("%s%s\n", "If we list all the natural numbers below 10 that are multiples", 
		"of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23."); 
	printf("%s\n", "The Project Euler problem is: find the sum of all the multiples of 3 or 5 below 1000.");
	printf("\n");

	printf("%s", "If you would like to see the Project Euler solution, press 0, press 1 to enter your own: ");
	get_input(&input);
	printf("\n");

	if (input == 0) {
		a = 3;
		b = 5;
		limit = 1000;
	} else {
		printf("%s", "Enter first number to sum: ");
		get_input(&a);

		printf("%s", "Enter second number to sum: ");
		get_input(&b);

		printf("%s", "Enter limit for multiples: ");
		get_input(&limit);
	}

	/* print result */
	printf("The sum of multiples of %d and %d under %d is %d.\n", 
		a,
		b, 
		limit, 
		sum_multiples(a, b, limit));

	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");
}

void problem_2() {
	
}

void problem_3() {
	
}

void problem_4() {
	
}

void problem_5() {
	
}

void problem_6() {
	
}

void problem_7() {
	
}

void problem_8() {
	
}