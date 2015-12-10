/* file.h */

#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include "..\project_euler.h"
#include <string.h>

/* for checking current working dir */
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

/* prototypes */
void working_directory(char *c);

#endif