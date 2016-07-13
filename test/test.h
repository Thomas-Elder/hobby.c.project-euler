/* test.h */

#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

/* project includes */
#include "..\src\utility\utility.h"
#include "..\src\solutions\solutions.h"
#include "..\src\project_euler.h"

/* std includes */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* colours for highlighting test results */
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

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
 * FUNCTION TEST     : sum_multiples_test()
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
 *              PARAMETERS :int a = 3
 *                          int b = 5
 *                          int limit = 1000
 *              EXPECTED   : 233168
 *
 * TEST CASE #3: 
 *              PARAMETERS :int a = 4
 *                          int b = 6
 *                          int limit = 20
 *              EXPECTED   : 76
 *
 * TEST CASE #4: 
 *              PARAMETERS :int a = 3
 *                          int b = 7
 *                          int limit = 23
 *              EXPECTED   : 126
 *
 * NOTES      : 
 */
int sum_multiples_all_tests(void);

#endif