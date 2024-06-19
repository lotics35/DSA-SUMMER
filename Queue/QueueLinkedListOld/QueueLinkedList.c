#include "QueueLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void initQueue(Queue *A){
	A->front=NULL;
	A->rear=NULL;
}

bool isEmpty(Queue *A){
	return A==NULL;
}

bool Enqueue(Queue *A,int elem){
	NodePtr temp=(Node*)malloc(sizeof(Node));
	temp->data=elem;
	temp->link=NULL;

	if(isEmpty(A)==1){
		A->front=temp;
		A->rear=temp;
	}
	else{
		temp=A->rear->link;
		A->rear=A->rear->link;
	}
	return A->rear!=NULL;
}

bool Dequeue(Queue *A){
	NodePtr temp=A->front;
	A->front=A->front->link;
	//free  temp
}

int Front(Queue A){
	if(isEmpty(&A))
		return -1;
	return A.front->data;
}

int Rear(Queue A){//
	if(isEmpty(&A))
		return -1;
	return A.rear->data;
}

void display(Queue A){
	//
}

