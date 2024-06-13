#ifndef STACK_ARRAY
#define STACK_ARRAY
#define MAX 5
#include <stdbool.h>

typedef struct{
	int data[MAX];
	int top;
}StackArrayList;

void initStackArray(StackArrayList *S);
//StackArrayList createStack();

bool Stack_Push(StackArrayList *S, int elem);
bool Stack_Pop(StackArrayList *S);
int Stack_Peek(StackArrayList *S);

void display(StackArrayList S);
void visualize(StackArrayList S);

#endif

