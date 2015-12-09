/* stack.h */
/* Linked list implementation of a stack */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

/* includes */
#include "..\project_euler.h"

#include <stdio.h>
#include <stdlib.h>

/* definitions */
struct node {
	char value;
	struct node *next;
};

struct stack {
	struct node *top;
	int count;
};

typedef struct node Node;
typedef struct stack Stack;

/* prototypes */
void init(Stack *stack);
void push(char value, Stack *stack);
char pop(Stack *stack);
int count(Stack *stack);

#endif