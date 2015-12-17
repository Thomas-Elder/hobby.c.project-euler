/* solutions.h */

#ifndef SOLUTIONS_H_INCLUDED
#define SOLUTIONS_H_INCLUDED

/* includes */
#include "..\project_euler.h"

/* definitions */

/* prototypes */

/** 
 * \fn int sum_multiples(int a, int b, int limit)
 * \brief sums multiples of two integers smaller than some limit.
 *
 * \param a an integer
 * \param b an integer
 * \param limit an integer  
 *
 * PURPOSE    : take two numbers and a limit. Sums all the multiples of those 
 *              numbers which are no greater than the limit.
 *
 * RETURNs    : returns the sum of those multiples
 *
 * NOTES      :
 */
int sum_multiples(int a, int b, int limit);

/* even_fibonacci_numbers
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
int sum_even_fibonacci_numbers(int limit);

/* largest_prime_factor
 *
 * PARAMETERS : long long int number 
 *
 * PURPOSE    : take a number and finds the largest prime factor of that number.
 *
 * RETURNs    : returns the largest prime factor of the passed number. 
 *
 * NOTES      :
 */
int largest_prime_factor(long long int number);

/* largest_palindrome_product
 *
 * PARAMETERS : long long int number
 *
 * PURPOSE    : 
 *
 * RETURNs    : 
 *
 * NOTES      :
 */
int largest_palindrome_product();

/* smallest_multiple
 *
 * PARAMETERS : int low 
 *              int high
 *
 * PURPOSE    : 
 *
 * RETURNs    : 
 *
 * NOTES      :
 */
int smallest_multiple(int low, int high);

/* sum_square_difference
 *
 * PARAMETERS : int limit
 *
 * PURPOSE    :
 *
 * RETURNs    :
 *
 * NOTES      :
 */
int sum_square_difference(int limit);

/* ten_thousand_and_first_prime
 *
 * PARAMETERS : int n
 *
 * PURPOSE    :
 *
 * RETURNs    :
 *
 * NOTES      :
 */
int nth_prime(int n);

/* largest_product_in_a_series
 *
 * PARAMETERS : char *filepath
 *              int product_count
 *
 * PURPOSE    :
 *
 * RETURNs    : long long int
 *
 * NOTES      :
 */
long long int largest_product_in_a_series(char *filepath, int product_count);

#endif