/* test.h */

#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

/* includes */
#include "..\src\utility\stack.h"
#include "..\src\utility\utility.h"
#include "..\src\solutions\solutions.h"
#include "..\src\project_euler.h"

/* std includes */
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
int test_sum_multiples(void);
int test_sum_even_fibonacci_numbers(void);
int test_largest_prime_factor(void);
int test_largest_palindrome_product(void);
int test_smallest_multiple(void);
int test_sum_square_difference(void);
int test_nth_prime(void);
int test_largest_product_in_a_series(void);
int test_check_answer(int question, long long int answer);

#endif