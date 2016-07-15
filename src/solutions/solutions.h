/* solutions.h */

#ifndef SOLUTIONS_H_INCLUDED
#define SOLUTIONS_H_INCLUDED

/* project includes */
#include "..\project_euler.h"

/* definitions */

/* prototypes */

/** 
 * sum_multiples
 *
 * PARAMETERS : int a
 *              int b
 *              a and b are the two numbers for which this function finds multiples
 *              of below the limit to sum and return. 
 *             
 *              int limit 
 *              The highest multiple considered for adding to the sum will be less
 *              than this limit.   
 *
 * PURPOSE    : Takes two numbers and a limit. Sums all the multiples of those 
 *              numbers which are no greater than the limit.
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int sum_multiples(int a, int b, int limit);

/* sum_even_fibonacci_numbers
 *
 * PARAMETERS : int limit 
 *              The highest element in the Fibonacci sequence considered for 
 *              adding to the sum will be less than this limit.
 *
 * PURPOSE    : Takes a limit and sums all even numbers in the Fibonacci 
 *              sequence under that limit.
 * 
 * RETURNS    : int
 *
 * NOTES      :
 */
int sum_even_fibonacci_numbers(int limit);

/* largest_prime_factor
 *
 * PARAMETERS : long long int number
 *              The number for which this function finds the largest prime factor. 
 *
 * PURPOSE    : Take a number and finds the largest prime factor of that number.
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int largest_prime_factor(long long int number);

/* largest_palindrome_product
 *
 * PARAMETERS : none
 *
 * PURPOSE    : Finds the largest palindromic product of two three digit numbers.
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int largest_palindrome_product();

/* smallest_multiple
 *
 * PARAMETERS : int low 
 *              int high
 *              The lower and upper bounds of the sequence of numbers this function
 *              returns a common multiple for.
 *
 * PURPOSE    : To find the smallest multiple of all numbers between two numbers 
 *              low and high.
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int smallest_multiple(int low, int high);

/* sum_square_difference
 *
 * PARAMETERS : int limit
 *
 * PURPOSE    : to find the difference between the sum of the squares of all integers
 *              under some limit, and the square of the sum of the same set of
 *              integers. 
 *
 * RETURNS    : int 
 *
 * NOTES      :
 */
int sum_square_difference(int limit);

/* nth_prime
 *
 * PARAMETERS : int n
 *              The prime number to be found.
 *
 * PURPOSE    : The function finds the nth prime number.
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int nth_prime(int n);

/* largest_product_in_a_series
 *
 * PARAMETERS : char *filepath
 *              The filepath of the file containing the series.
 *              Must be an unbroken series of integer values.                    
 *
 *              int product_count
 *              The length of the sequence of numbers to product
 *
 * PURPOSE    : to return the highest product which can be made of a sequence of
 *              values in the given series.
 *
 * RETURNS    : long long int
 *
 * NOTES      :
 */
long long int largest_product_in_a_series(char *filepath, int product_count);

/* special_pythagorean_triplet
 *
 * PARAMETERS : int limit
 *
 * PURPOSE    : to return the product abc where a < b < c, and a^2 + b^2 = c^2,
 *              and a + b + c = limit. 
 *
 * RETURNS    : int
 *
 * NOTES      :
 */
int special_pythagorean_triplet(int limit);

#endif