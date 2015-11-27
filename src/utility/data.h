/* data.h */

#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

/* includes */
#include "..\project_euler.h"

#include <stdio.h>
#include <stdlib.h>

/* definitions */
typedef struct node {
	int value;
	struct node *next;
} Node;

typedef struct list {
	struct node *head;
	struct node *tail;
	int size;
} List;

/* prototypes */
int init(List *list);

int push(void);
void pop(int value);

int enqueue(void);
void dequeue(int value);

#endif