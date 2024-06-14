#ifndef STACK_ARRAY
#define STACK_ARRAY
#define MAX 5
#include <stdbool.h>

typedef struct{
	int data[MAX];
	int count;
}StackArrayList;

void initStack(StackArrayList *A);
//StackArrayList createStack(); //is the same as init stack???


bool isEmpty(StackArrayList *A);
bool isFull(StackArrayList *A);
bool stack_push(StackArrayList *A, int elem);
bool stack_pop(StackArrayList *A);
int stack_peek(StackArrayList A);

void display(StackArrayList A);
void visualized(StackArrayList A);

#endif
