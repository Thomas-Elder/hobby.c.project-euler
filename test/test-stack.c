/* test-stack.c */

#include "test-stack.h"

int main(int argc, char const *argv[])
{
	/* local variables */
	char string[] = "My name is Thomas";
	int i;
	Stack stack;

	printf("%s\n", "Testing stack implementation... ");

	printf("%s\n", "test-stack");
	printf("%s: %d\n", "Number of arguments", argc);
	printf("%s: %d\n", "Size of argv", sizeof(argv));

	printf("%s\n", "Initialising stack...");
	init(&stack);

	printf("%s\n", "Pushing test string to stack... ");
	for (i = 0; string[i] != '\0'; i++) {
		push(string[i], &stack);
	}

	printf("%s\n", "Popping chars from stack... ");

	printf("%c\n", pop(&stack));
	printf("%c\n", pop(&stack));
	printf("%c\n", pop(&stack));

	printf("%s\n", "Freeing memory... ");

	while (count(&stack) != 0) {
		pop(&stack);
	}

	return 0;
}