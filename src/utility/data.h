/* data.h */

#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

/* includes */
#include "..\project_euler.h"

#include <stdio.h>
#include <stdlib.h>

/* definitions */
struct node {
	int value;
	struct node *next;
};

struct list {
	struct node *head;
	struct node *tail;
	int size;
};

/* prototypes */
int pop(void);
int push(void);
int enqueue(void);
int dequeue(void);

#endif