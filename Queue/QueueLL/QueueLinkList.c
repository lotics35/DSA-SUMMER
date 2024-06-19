#include "QueueLinkList.h"
#include <stdio.h>

void initList(Queue *A){
	A->head=NULL;
	A->tail=NULL;
	printf("List initialized\n");
}

void Enqueue(Queue *A, int elem){
	nPtr temp=(nPtr)malloc(sizeof(Node));
	temp->data=elem;
	temp->next=NULL;
	
	if(A->tail==NULL&&A->head==NULL){
		A->tail=temp;
		A->head=temp;
	}else{
		A->tail->next=temp;
		A->tail=temp;
	}
	printf("Enqueued\n");
}

void Dequeue(Queue *A){
	nPtr hold;
	hold=A->head;
	A->head=A->head->next;
	free(hold);
	printf("Dequeued\n");
}

void display(Queue A){
	while(A.head!=NULL){
		printf("%d\n", A.head->data);
		A.head=A.head->next;
	}
	printf("\n");
}



