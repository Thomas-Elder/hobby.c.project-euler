#ifndef SOLUTIONS_TESTS_H_INCLUDED
#define SOLUTIONS_TESTS_H_INCLUDED

#include "..\test.h"

/* prototypes */

/* sum_multiples_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : sum_multiples()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1: 
 * The Project Euler example values.
 *              PARAMETERS : int a = 3
 *                           int b = 5
 *                           int limit = 10
 *              EXPECTED   : 23
 *
 * TEST CASE #2:
 * The actual Project Euler problem values. 
 *              PARAMETERS : int a = 3
 *                           int b = 5
 *                           int limit = 1000
 *              EXPECTED   : 233168
 *
 * TEST CASE #3: 
 *              PARAMETERS : int a = 4
 *                           int b = 6
 *                           int limit = 20
 *              EXPECTED   : 76
 *
 * TEST CASE #4: 
 *              PARAMETERS : int a = 3
 *                           int b = 7
 *                           int limit = 23
 *              EXPECTED   : 126
 *
 * NOTES      : 
 */
int sum_multiples_all_tests(void);

/* sum_even_fibonacci_numbers_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : sum_even_fibonacci_numbers()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1: 
 * The actual Project Euler problem value.
 *              PARAMETERS : int limit = 4000000
 *              EXPECTED   : 4613732
 *
 * TEST CASE #2:
 *              PARAMETERS : int limit = 50
 *              EXPECTED   : 44
 *
 * TEST CASE #3: 
 *              PARAMETERS : int limit = 100
 *              EXPECTED   : 44
 *
 * TEST CASE #4: 
 *              PARAMETERS :int limit = 1000
 *              EXPECTED   : 798
 *
 * NOTES      : 
 */
int sum_even_fibonacci_numbers_all_tests(void);

/* largest_prime_factor_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : largest_prime_factor()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : long long int number = 13195
 *              EXPECTED   : 29
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : long long int number = 600851475143
 *              EXPECTED   : 6857
 *
 * TEST CASE #3: 
 *              PARAMETERS : long long int number = 501
 *              EXPECTED   : 167
 *
 * TEST CASE #4: 
 *              PARAMETERS : long long int number = 5040
 *              EXPECTED   : 7
 *
 * NOTES      : 
 */
int largest_prime_factor_all_tests(void);

/* largest_palindrome_product_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : largest_palindrome_product()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #3: 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #4: 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * NOTES       : Currently largest_palindrome_product() doesn't accept any
 *               parameters, so I can only test the one case, ie the actual
 *               Project Euler problem.
 *
 *               For now this will return 4 if that one test passes. 
 */
int largest_palindrome_product_all_tests(void);

/* sum_even_fibonacci_numbers_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : sum_even_fibonacci_numbers()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #3: 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * TEST CASE #4: 
 *              PARAMETERS : 
 *              EXPECTED   : 
 *
 * NOTES       : 
 *                
 */
int sum_even_fibonacci_numbers_all_tests(void);

/* smallest_multiple_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : smallest_multiple()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : int low = 1
 *                           int high = 10
 *              EXPECTED   : 2520
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : int low = 1
 *                           int high = 20
 *              EXPECTED   : 232792560
 *
 * TEST CASE #3: 
 *              PARAMETERS : int low = 1
 *                           int high = 5
 *              EXPECTED   : 
 *
 * TEST CASE #4: 
 *              PARAMETERS : int low = 1
 *                           int high = 7
 *              EXPECTED   : 
 *
 * NOTES      : 
 */
int smallest_multiple_all_tests(void);

/* sum_square_difference_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : sum_square_difference()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : int limit = 10
 *              EXPECTED   : 2640
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : int limit = 100
 *              EXPECTED   : 25164150
 *
 * TEST CASE #3: 
 *              PARAMETERS : int limit = 5
 *              EXPECTED   : 170
 *
 * TEST CASE #4: 
 *              PARAMETERS : int limit = 2
 *              EXPECTED   : 4
 *
 * NOTES      : 
 */
int sum_square_difference_all_tests(void);

/* nth_prime_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : nth_prime()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : int n = 6
 *              EXPECTED   : 13
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : int n = 10 001
 *              EXPECTED   : 104743
 *
 * TEST CASE #3: 
 *              PARAMETERS : int n = 3
 *              EXPECTED   : 5
 *
 * TEST CASE #4: 
 *              PARAMETERS : int n = 8
 *              EXPECTED   : 19
 *
 * NOTES      : 
 */
int nth_prime_all_tests(void);

/* largest_product_in_a_series_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : largest_product_in_a_series()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt"
 *                           int product_count = 4
 *              EXPECTED   : 5832
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt"
 *                           int product_count = 13
 *              EXPECTED   : 23514624000
 *
 * TEST CASE #3: 
 *              PARAMETERS : char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt"
 *                           int product_count = 1
 *              EXPECTED   : 9 
 *
 * TEST CASE #4: 
 *              PARAMETERS : char *filepath = "E:\\c\\practice\\Project Euler\\doc\\problem_8_series.txt"
 *                           int product_count = 2
 *              EXPECTED   : 81
 *
 * NOTES      : 
 */
int largest_product_in_a_series_all_tests(void);

/* special_pythagorean_triplet_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : special_pythagorean_triplet()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The actual Project Euler problem value.
 *              PARAMETERS : int limit = 1000
 *              EXPECTED   : 31875000
 *
 * NOTES      : Not sure there's a good way to rewrite the function
 *              to be able to take different values for the limit. There is
 *              apparently only one set of values which fulfil the requirements.
 */
int special_pythagorean_triplet_all_tests(void);

/* sum_of_primes_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : sum_of_primes()
 *
 * FUNCTION'S SOURCE : solutions.c
 *
 * TEST CASE #1:
 * The Project Euler example values. 
 *              PARAMETERS : int limit = 10
 *              EXPECTED   : 17
 *
 * TEST CASE #2:
 * The actual Project Euler problem value.
 *              PARAMETERS : int limit = 2000000
 *              EXPECTED   : 142913828922
 *
 * TEST CASE #3: 
 *              PARAMETERS : int limit = 20
 *              EXPECTED   : 77
 * TEST CASE #4: 
 *              PARAMETERS : int limit = 100
 *              EXPECTED   : ?20
 *
 * NOTES      : 
 */
long long int sum_of_primes_all_tests(void);

#endif