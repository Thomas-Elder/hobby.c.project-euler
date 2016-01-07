/* project_euler.c */

#include "project_euler.h"

int main(void) {

	/* local variables */
	int input;

	printf("\n");
	printf("%s\n", "Welcome to Tom's Project Euler solutions!");
	/*print_directory();*/

	input = -1;

	while (input != 0){

		/* menu */
		printf("\n");
		printf("%s\n", "Please select from the following solutions:");
		printf("%s\n", "1 - Multiples of 3 and 5");
		printf("%s\n", "2 - Even Fibonacci numbers");
		printf("%s\n", "3 - Largest Prime factor");
		printf("%s\n", "4 - Largest palindrome product");
		printf("%s\n", "5 - Smallest multiple");
		printf("%s\n", "6 - Sum square difference");
		printf("%s\n", "7 - 10001st prime");
		printf("%s\n", "8 - Largest product in a series");
		/*printf("%s\n", "9 - Special Pythagorean triplet");
		printf("%s\n", "10 - Summation of primes");
		printf("%s\n", "11 - Largest product in a grid");
		printf("%s\n", "12 - Highly divisible triangular number");*/
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
			problem_2();
			break;
		case 3:
			problem_3();
			break;
		case 4:
			problem_4();
			break;
		case 5:
			problem_5();
			break;
		case 6:
			problem_6();
			break;
		case 7:
			problem_7();
			break;
		case 8:
			problem_8();
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
	int a, b, limit, input, result;
	
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

	result = sum_multiples(a, b, limit);

	/* print result */
	printf("The sum of multiples of %d and %d under %d is %d.\n", 
		a,
		b, 
		limit, 
		result);

	if (check_answer(1, result)) {
	printf("%s\n", "Confirmed correct on Project Euler.");
	} else {
		printf("%s\n", "Answer is incorrect.");
	}

	printf("\n");
}

void problem_2() {
	
	/* local variables */
	int input, limit;

	/* print title and problem */
	printf("%s\n", "Even Fibonacci numbers");
	printf("%s\n%s\n%s\n", "Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:",
		"1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...",
		"By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.");
	printf("\n");
	
	printf("%s", "If you would like to see the Project Euler solution, press 0, press 1 to enter your own: ");
	get_input(&input);
	printf("\n");

	if (input == 0) {
		limit = 4000000;
	} else {
		printf("%s", "Enter limit for Fibonacci sum: ");
		get_input(&limit);
	}

	/* print result */
	printf("The sum of even Fibonacci numbers under %d is: %d\n", limit, sum_even_fibonacci_numbers(limit));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");
}

void problem_3() {

	/* local variables */
	int input;
	long long int limit;

	/* print title and problem */
	printf("%s\n", "Largest Prime factor");
	printf("%s\n%s\n", "The prime factors of 13195 are 5, 7, 13 and 29.",
		"What is the largest prime factor of the number 600851475143?");
	
	printf("%s", "If you would like to see the Project Euler solution, press 0, press 1 to enter your own: ");
	get_input(&input);
	printf("\n");

	if (input == 0) {
		limit = 600851475143;
	} else {
		printf("%s", "Enter the number you'd like to know the largest prime factor of: ");
		get_input_ll(&limit);
	}

	/* print result */
	printf("%s%d\n", "The largest prime factor of 600851475143 is:", largest_prime_factor(limit));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");	
}

void problem_4() {

	/* print title and problem */
	printf("%s\n", "Largest palindrome product");
	printf("%s\n%s%s\n%s%s\n", "A palindromic number reads the same both ways.",
		"The largest palindrome made from the product of two 2-digit numbers",
		" is 9009 = 91 * 99.",
		"Find the largest palindrome made from the product of two 3-digit",
		" numbers.");
	printf("\n");

	/* print result */
	printf("%s%d\n", "The largest palimdromic product of two 3 digit numbers is: ", largest_palindrome_product());
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");
}

void problem_5() {

	/* print title and problem */
	printf("%s\n", "Smallest multiple");
	printf("%s\n%s\n", "2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.",
		"What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?");
	printf("\n");

	/* print result */
	printf("%s%d\n", "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ", smallest_multiple(10, 20));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");
}

void problem_6() {

	/* print title and problem */
	printf("%s\n", "Sum square difference");
	printf("%s\n%s\n\n%s\n%s\n\n%s\n%s", 
		"The sum of the squares of the first ten natural numbers is,",
		"1^2 + 2^2 + ... + 10^2 = 385",
		"The square of the sum of the first ten natural numbers is,",
		"(1 + 2 + ... + 10)^2 = 55^2 = 3025",
		"Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.",
		"Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.");
	printf("\n");

	/* print result */
	printf("%s%d\n", "The difference between the sum of the squares and the square of the sum of the first one hundred natural numbers is: ", sum_square_difference(100));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");	
}

void problem_7() {
	
	/* print title and problem */
	printf("%s\n", "10001st prime");
	printf("%s\n%s\n", 
		"By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.",
		"What is the 10 001st prime number?");
		printf("\n");

	/* print result */
	printf("%s%d\n", "the 10 001st prime number is: ", nth_prime(10001));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");
}

void problem_8() {

	/* local variables */
	char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt";

	/* print title and problem */
	printf("%s\n", "Largest product in a series");
	printf("%s\n%s\n", 
		"The four adjacent digits in the 1000-digit number that have the greatest product are 9 - 9 - 8 - 9 = 5832.",
		"Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?");
		printf("\n");

	/* print result */
	printf("%s%llu\n", "Largest product in this series is: ", largest_product_in_a_series(filepath, 13));
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("\n");	
}