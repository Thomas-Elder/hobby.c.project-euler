/* project_euler.c */

#include "project_euler.h"

int main(void) {

	/* local variables */
	char buffer[256];
	int input;

	input = -1;

	while (input != 0){

		/* menu */
		printf("%s\n", "Welcome to Tom's Project Euler solutions!");
		printf("%s\n", "Please select from the following solutions:");
		printf("%s\n", "1 - Multiples of 3 and 5");
		printf("%s\n", "2 - Even Fibonacci numbers");
		printf("%s\n", "");
		printf("%s\n", "");
		printf("%s\n", "0 - Exit");
		printf("%s\n", "");

		fgets(buffer, MAXINT, stdin);
		read_rest_of_line();
		input = atoi(buffer);

		switch (input) {
			case 1:
				multiples_3_and_5();
				break;
			case 2:
				even_fibonacci_numbers();
				break;
			case 0:
				return 0;
			default:
				printf("%s\n", "Invalid input, try again.");
				break;
		}
	}

	return 0;
}

/* Function Definitions */
void read_rest_of_line(void)
{
	/* local variables */
    int ch;

    /* read characters one at a time from standard input until there are
     * no characters left to read
     */
    while (ch=getc(stdin), ch!=EOF && ch!='\n'){
        printf("%s : %c\n", "Reading from buffer character", ch);
    }
    
    /* reset the error status of the input FILE pointer */
    clearerr(stdin);
}