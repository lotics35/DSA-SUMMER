#ifndef STACK_LL
#define STACK_LL
#include<stdbool.h>

typedef struct node{
	int data;
	struct node *next;
}Node, *nPtr;

void initStack(nPtr *A);

bool isEmpty(nPtr A);
bool stack_push(nPtr *A, int elem);
bool stack_pop(nPtr *A);
int stack_peek(nPtr A);

void display(nPtr A);
void visualized(nPtr A);

#endif
