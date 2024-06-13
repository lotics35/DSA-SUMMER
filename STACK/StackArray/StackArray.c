#include "StackArray.h"
#include <stdio.h>

void initStack(StackArrayList *A){
	A->count=0;
}

bool isEmpty(StackArrayList *A){
	return A->count==0;
}

bool isFull(StackArrayList *A){
	return A->count==MAX;
}

bool stack_push(StackArrayList *A, int elem){
	if(isFull(A)){
		return false;
	}
	A->data[A->count++]=elem;;
	return true;
}

bool stack_pop(StackArrayList *A){
	if(isEmpty(A)){
		return false;
	}
	A->data[--A->count]=0;
	return true;
}

int stack_peek(StackArrayList A){
	if(isEmpty(&A))
		return -1;
	return A.data[A.count-1];
}

void display(StackArrayList A){;
	printf("Top value right now is %d\n", stack_peek(A));
}

