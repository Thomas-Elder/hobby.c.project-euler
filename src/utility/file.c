/* file.c */

#include "file.h"

void working_directory(char *c) {

	char working_directory[FILENAME_MAX];

 	if (!GetCurrentDir(working_directory, sizeof(working_directory)))
     	printf("%s\n", "Error!");

    working_directory[sizeof(working_directory) - 1] = '\0'; /* not really required */

    strcpy(c, working_directory);
}
