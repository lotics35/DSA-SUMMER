#ifndef STACK_ARRAY
#define STACK_ARRAY
#define MAX 5
#include <stdbool.h>

typedef struct node{
	int data;
	struct node *link;	
}StackList, *Slist;

void initStack(Slist *S);
//StackArrayList createStack();

bool Stack_Push(Slist *S, int elem);
bool Stack_Pop(Slist *S);
int Stack_Peek(Slist *S);

void display(Slist S);
void visualize(Slist S);

#endif

