/* stack.c */

#include "stack.h"

/* function definitions */

/* init 
 * Initialise the stack.
 */
void init(Stack *stack) {
	stack -> count = 0;
	stack -> top = NULL;
}

/* push 
 * Add an char to the top of the stack
 */
void push(char value, Stack *stack) {
	Node *p;

	p = malloc(sizeof(char));
	p -> value = value;
	p -> next = stack -> top;
	stack -> top = p;
	stack -> count++;
}

/* pop 
 * Return an char from the top of the stack
 */
char pop(Stack *stack) {
	Node *p;
	char value;

	value = stack -> top -> value;
	p = stack -> top;

	stack -> top = stack -> top -> next;
	stack -> count--;

	free(p);

	return value;
}

int count(Stack *stack) {
	return stack -> count;
}