/* solutions.h */

#ifndef SOLUTIONS_H_INCLUDED
#define SOLUTIONS_H_INCLUDED

/* includes */
#include "..\project_euler.h"

/* definitions */

/* prototypes */

/* sum_multiples
 *
 * PARAMETERS : int a
 *              int b
 *              int limit  
 *
 * PURPOSE    : take two numbers and a limit. Sums all the multiples of those 
 *              numbers which are no greater than the limit.
 *
 * RETURNs    : returns the sum of those multiples
 *
 * NOTES      :
 */
int sum_multiples(int a, int b, int limit);

int even_fibonacci_numbers(int limit);
int largest_prime_factor(long long int number);
int largest_palindrome_product();
void smallest_multiple();
void sum_square_difference();
void ten_thousand_and_first_prime();
void largest_product_in_a_series();

#endif