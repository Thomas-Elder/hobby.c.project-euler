/* utility.h */

#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

/* includes */
#include "..\project_euler.h"
#include <math.h> 
#include <stdbool.h>

/* definitions */


/* prototypes */
bool is_prime(int value);
bool is_palindrome(int value);
int reverse_int(int value);
void read_rest_of_line(void);
void print_directory(void);

#endif