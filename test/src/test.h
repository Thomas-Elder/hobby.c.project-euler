/* test.h */

#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

/* project includes */
#include "..\..\src\utility\utility.h"
#include "..\..\src\solutions\solutions.h"
#include "..\..\src\project_euler.h"

#include "solutions\solutions_tests.h"
#include "utility\utility_tests.h"

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

#endif