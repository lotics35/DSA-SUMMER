#include "QueueArray.h"

void initQueue(Queue *A){
	A->tail=8;
	A->head=9;
}

bool isEmpty(Queue A){
	return A.tail+1%MAX==A.head;
}

bool isFull(Queue A){
	return A.tail+2%MAX==A.head;
}

void Enqueue(Queue *A,int elem){
	if(isFull(*A)==1){
		printf("Queue is Full\n");
	}else{
		if(A->tail==9){
			A->tail=0;
			A->data[A->tail]=elem;
		}else{
			A->tail++;
			A->data[A->tail]=elem;
		}
		
	}		
}

void Dequeue(Queue *A){
	if(A->head==9){
		A->head=0;
	}else
		A->head++;
}

void display(Queue A){
	int ctr;
	if(isEmpty(A)==1){
		printf("List is Empty");
	}else{
//		for(ctr=A.head;ctr!=A.tail;ctr++){//very wrg loop somehow
//			printf("%d Value:%d\n", ctr,A.data[ctr]);
//			if(ctr==9)
//				ctr=0;
//		}
		ctr=A.head;
		while(ctr!=A.tail+1){
			printf("%d Value:%d\n", ctr,A.data[ctr]);
			if(ctr==9)
				ctr=0;
			else
				ctr++;
		}
	}
	printf("\n");
}

void visualize(Queue A){
	int ctr;
	for(ctr=0;ctr<MAX;ctr++){
		printf("Array[%d]-value:%d\n", ctr,A.data[ctr]);
	}
	
}
