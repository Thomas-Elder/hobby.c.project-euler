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
int even_fibonacci_numbers(int limit);

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
 * PARAMETERS : 
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
 * PARAMETERS : 
 *
 * PURPOSE    : 
 *
 * RETURNs    : 
 *
 * NOTES      :
 */
void smallest_multiple();

/* sum_square_difference
 *
 * PARAMETERS :
 *
 * PURPOSE    :
 *
 * RETURNs    :
 *
 * NOTES      :
 */
void sum_square_difference();

/* ten_thousand_and_first_prime
 *
 * PARAMETERS :
 *
 * PURPOSE    :
 *
 * RETURNs    :
 *
 * NOTES      :
 */
void ten_thousand_and_first_prime();

/* largest_product_in_a_series
 *
 * PARAMETERS : 
 *
 * PURPOSE    :
 *
 * RETURNs    :
 *
 * NOTES      :
 */
void largest_product_in_a_series();

#endif