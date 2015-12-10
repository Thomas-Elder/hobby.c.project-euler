/* utility.h */

#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

/* includes */
#include "..\project_euler.h"

#include <math.h> 
#include <stdbool.h>
#include <string.h>

/* definitions */

/* For checking current working dir */
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

/* prototypes */
void working_directory(char *c);
bool is_prime(int value);
bool is_palindrome(int value);
int reverse_int(int value);
void read_rest_of_line(void);
void print_directory(void);
void get_int(int *input);
void get_big_int(int *input);

#endif