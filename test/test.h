/* test.h */

#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

/* project includes */
#include "..\src\utility\stack.h"
#include "..\src\utility\utility.h"
#include "..\src\solutions\solutions.h"
#include "..\src\project_euler.h"

/* std includes */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* prototypes */

/* test_sum_multiples
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : sum_multiples()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : int a = 3
 *                           int b = 5
 *                           int limit = 1000
 *              EXPECTED   : 233168
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_sum_multiples(void);

/* test_sum_even_fibonacci_numbers
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : sum_even_fibonacci_numbers()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : limit = 4000000;
 *              EXPECTED   : 4613732
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_sum_even_fibonacci_numbers(void);

/* test_largest_prime_factor
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : largest_prime_factor()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : limit = 600851475143
 *              EXPECTED   : 6857
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_largest_prime_factor(void);

/* test_largest_palindrome_product
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : largest_palindrome_product()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   : 906609
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_largest_palindrome_product(void);

/* test_smallest_multiple
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : smallest_multiple()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : int low = 10
 *                           int high = 20
 *              EXPECTED   : 232792560
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_smallest_multiple(void);

/* test_sum_square_difference
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : sum_square_difference()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : int limit = 100
 *              EXPECTED   : 232792560
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_sum_square_difference(void);

/* test_nth_prime
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : nth_prime()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : int n = 10001
 *              EXPECTED   : 104743
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_nth_prime(void);

/* test_largest_product_in_a_series
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : largest_product_in_a_series()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #: 
 *              PARAMETERS : char *filepath =
                "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt"
 *                           int product_count = 13
 *              EXPECTED   : 23514624000
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_largest_product_in_a_series(void);

/* test_check_answer
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : check_answer()
 *
 * FUNCTION'S SOURCE : utility.c
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
int test_check_answer(int question, long long int answer);

/* test_is_prime
 *
 * PARAMETERS : void
 *
 * RETURNS    : bool
 *
 * FUCTION TESTED    : is_prime()
 *
 * FUNCTION'S SOURCE : utility.c
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * TEST CASE #: 
 *              PARAMETERS :
 *              EXPECTED   :
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
bool test_is_prime(bool expected, int number);

#endif