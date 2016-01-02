/* utility.h */

#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

/* includes */
#include "..\project_euler.h"

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

/**
 * \breif Gets the working directory. 
 * \fn void working_directory(char *c)
 *
 * \param c char *
 */
void working_directory(char *c);
bool is_prime(int value);
bool is_palindrome(int value);
int reverse_int(int value);

void get_input(int *input);
void get_input_ll(long long int *input);

void read_rest_of_line(void);
void print_directory(void);

int check_answer(int question, long long int answer);

#endif