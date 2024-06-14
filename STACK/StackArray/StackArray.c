#include "StackArray.h"
#include <stdio.h>

void initStack(StackArrayList *A){
	A->count=0;
}

bool isEmpty(StackArrayList *A){
	return A->count==0;//returns true if stack is empty
}

bool isFull(StackArrayList *A){
	return A->count==MAX; //returns true if stack is full
}

//bool stack_push(StackArrayList *A, int elem){
//	if(isFull(A)){
//		return false;
//	}
//	A->data[A->count++]=elem;;
//	return true;
//}

bool stack_push(StackArrayList *A, int elem){
	//*returns false if stack is full
	return isFull(A)? false: (A->data[A->count++]=elem, true);
}

//bool stack_pop(StackArrayList *A){
//	if(isEmpty(A)){
//		return false;
//	}
//	A->data[--A->count]=0;
//	return true;
//}

bool stack_pop(StackArrayList *A){
	//returns false if stack is empty
	return isEmpty(A)? false: (--A->count, true);
}

//int stack_peek(StackArrayList A){
//	if(isEmpty(&A))
//		return -1;
//	return A.data[A.count-1];
//}

int stack_peek(StackArrayList A){
	return isEmpty(&A)? -1: A.data[A.count-1];
}

void display(StackArrayList A){;
	printf("Top value right now is %d\n", stack_peek(A));

}

void visualized(StackArrayList A){
	printf("Position|Value\n");
	for(int ctr=0;ctr<A.count;ctr++){
		printf("---%d---|---%d---\n", ctr, A.data[ctr]);
	}
}




