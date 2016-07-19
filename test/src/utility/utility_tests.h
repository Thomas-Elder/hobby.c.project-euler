#ifndef UTILITY_TESTS_H_INCLUDED
#define UTILITY_TESTS_H_INCLUDED

#include "..\test.h"

/* is_palindrome_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : is_palindrome()
 *
 * FUNCTION'S SOURCE : utility.c
 *
 * TEST CASE #1:
 *              PARAMETERS : int value = 999
 *              EXPECTED   : true
 *
 * TEST CASE #2:
 *              PARAMETERS : long long int value = 660066
 *              EXPECTED   : true
 *
 * TEST CASE #3: 
 *              PARAMETERS : long long int value = 66006
 *              EXPECTED   : false
 *
 * TEST CASE #4: 
 *              PARAMETERS : long long int value = 1111112
 *              EXPECTED   : false
 *
 * NOTES      : 
 */
int is_palindrome_all_tests(void);

/* is_prime_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : is_prime()
 *
 * FUNCTION'S SOURCE : utility.c
 *
 * TEST CASE #1:
 *              PARAMETERS : int value = 2
 *              EXPECTED   : true
 *
 * TEST CASE #2:
 *              PARAMETERS : long long int value = 67
 *              EXPECTED   : true
 *
 * TEST CASE #3: 
 *              PARAMETERS : long long int value = 1099
 *              EXPECTED   : false
 *
 * TEST CASE #4: 
 *              PARAMETERS : long long int value = 5040
 *              EXPECTED   : false
 *
 * NOTES      : 
 */
int is_prime_all_tests(void);

/* pythagorean_triplet_all_tests
 *
 * PARAMETERS        : void
 *
 * RETURNS           : int
 *                     An integer from 0-4, indicating how many
 *                     of the 4 test cases were passed. 
 *
 * FUCTION TESTED    : pythagorean_triplet()
 *
 * FUNCTION'S SOURCE : utility.c
 *
 * TEST CASE #1:
 *              PARAMETERS : int a = 3
 *                           int b = 4
 *                           int c = 5
 *              EXPECTED   : true
 *
 * TEST CASE #2:
 *              PARAMETERS : int a = 5
 *                           int b = 4
 *                           int c = 3
 *              EXPECTED   : false
 *
 * TEST CASE #3: 
 *              PARAMETERS : int a = 20
 *                           int b = 21
 *                           int c = 29
 *              EXPECTED   : true
 *
 * TEST CASE #4: 
 *              PARAMETERS : int a = 68
 *                           int b = 285
 *                           int c = 293
 *              EXPECTED   : true
 *
 * NOTES      : 
 */
int pythagorean_triplet_all_tests(void);
#endif