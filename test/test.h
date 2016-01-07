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
#include <stdbool.h>

/* prototypes */

/* sum_even_fibonacci_numbers
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_sum_multiples(void);

/* sum_even_fibonacci_numbers
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_sum_even_fibonacci_numbers(void);

/* sum_even_fibonacci_numbers
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_largest_prime_factor(void);

/* sum_even_fibonacci_numbers
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_largest_palindrome_product(void);

/* test_smallest_multiple
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_smallest_multiple(void);

/* test_sum_square_difference
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_sum_square_difference(void);

/* test_nth_prime
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_nth_prime(void);

/* test_largest_product_in_a_series
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_largest_product_in_a_series(void);

/* test_check_answer
 *
 * PARAMETERS : int limit  
 *
 * PURPOSE    : takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNs    : returns the sum of those even numbers.
 *
 * NOTES      :
 */
int test_check_answer(int question, long long int answer);

/* test_is_prime
 *
 * PARAMETERS : int limit  
 *
 * RETURNS    : bool 
 *
 * PURPOSE    : takes an expected result and a number, and returns true if 
 *              the number lives that expectation of primeness.
 *
 * NOTES      :
 */
bool test_is_prime(bool expected, int number);

#endif