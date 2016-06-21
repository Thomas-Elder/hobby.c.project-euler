/* utility.h */

#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

/* project includes */
#include "..\project_euler.h"

/* std includes */
#include <math.h> 
#include <stdbool.h>
#include <string.h>

/* definitions */
#define ANSWER_FILEPATH "E:\\c\\practice\\Project Euler\\doc\\project_euler_solutions.txt"

/* For checking current working dir */
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

/* prototypes */

/* pythagorean_triplet
 *
 * PARAMETERS : int a
 *              int b
 *              int c
 *
 * RETURNS    : bool
 *
 * PURPOSE    : Tests whether the 3 values given form a Pythagorean Triplet.
 *              For 3 integers a, b and c the following must hold:
 *              a < b < c and
 *              a^2 + b^2 = c^2
 *
 * NOTES      : Any further info, probably more about it's dev process.
 */
bool pythagorean_triplet(int a, int b, int c);

/* is_prime
 *
 * PARAMETERS : int value
 *
 * RETURNS    : bool
 *
 * PURPOSE    : Tests for primeness of an integer.
 *
 * NOTES      : Currently pretty unsafe and ineffecient.
 */
bool is_prime(int value);

/* is_palindrome
 *
 * PARAMETERS : int value
 *
 * RETURNS    : bool
 *
 * PURPOSE    : Compares the digits of an integer with the reverse order of 
 *              digits and returns true if those patterns match.
 *
 * NOTES      :
 */
bool is_palindrome(int value);

/* reverse_int
 *
 * PARAMETERS : int value
 *
 * RETURNS    : int
 *
 * PURPOSE    : Returns an integer who's digits are in the reverse order of the
 *              value passed.
 *
 * NOTES      :
 */
int reverse_int(int value);

/* get_input
 *
 * PARAMETERS : int *input
 *
 * RETURNS    : void
 *
 * PURPOSE    : Takes a pointer 
 *
 * NOTES      :
 */
void get_input(int *input);

/* get_input_ll
 *
 * PARAMETERS : long long int *input
 *
 * RETURNS    : void
 *
 * PURPOSE    : Takes a pointer to a long long int and assigns the long long int
 *              conversion of the input by the user.
 *
 * NOTES      :
 */
void get_input_ll(long long int *input);

/* read_rest_of_line
 *
 * PARAMETERS : void
 *  
 * RETURNS    : void
 *
 * PURPOSE    : Reads chars from the stdin buffer to prevent them being used
 *              accidentally in subsequent input reads.
 *
 * NOTES      :
 */
void read_rest_of_line(void);

/* print_directory
 *
 * PARAMETERS : void
 *
 * RETURNS    : void
 *
 * PURPOSE    : Prints the directory from which the executable is being run.
 *
 * NOTES      :
 */
void print_directory(void);

/* working_directory
 *
 * PARAMETERS : char *c
 *
 * RETURNS    : void
 *
 * PURPOSE    : Finds the current working directoru and stores in the passed
 *              char pointer.
 *
 * NOTES      :
 */
void working_directory(char *c);

/* check_answer
 *
 * PARAMETERS : int question
 *              long long int answer
 *
 * RETURNS    : bool
 * 
 * PURPOSE    : To check if the answer parameter matches the answer read from
 *              the solutions text file, for the question parameter.
 *
 * NOTES      :
 */
bool check_answer(int question, long long int answer);

#endif