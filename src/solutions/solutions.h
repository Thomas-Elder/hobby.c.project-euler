/* solutions.h */

#ifndef SOLUTIONS_H_INCLUDED
#define SOLUTIONS_H_INCLUDED

/* includes */
#include "..\project_euler.h"

/* definitions */
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

/* prototypes */
void multiples_3_and_5();
void even_fibonacci_numbers();
void largest_prime_factor();
void largest_palindrome_product();
void smallest_multiple();
void sum_square_difference();
void ten_thousand_and_first_prime();
void largest_product_in_a_series();

#endif