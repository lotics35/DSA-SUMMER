#include "StackLL.h"
#include <stdlib.h>
#include <stdio.h>

void initStack(nPtr *A){
	*A=NULL;
}

bool isEmpty(nPtr A){
	return A==NULL;
}

bool stack_push(nPtr *A, int elem){
	nPtr node = (Node*)malloc(sizeof(Node));
	node->data=elem;
	node->next=*A;
	*A=node;
	
	return *A==node?true:false;
}

bool stack_pop(nPtr *A){//fix/make it better
	nPtr temp=*A;
	*A=(*A)->next;
	free(temp);
	
	return temp==NULL?1:0;
}

int stack_peek(nPtr A){
	return isEmpty(A)? -1: A->data;
}

void display(nPtr A){
	printf("Top value right is %d\n", stack_peek(A));
}
