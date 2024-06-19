#ifndef QueueLinkList
#define QueueLinkList
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node, *nPtr;

typedef struct{
	nPtr head;
	nPtr tail;
}Queue;

void initList(Queue *A);
void Enqueue(Queue *A, int elem);
void Dequeue(Queue *A);
void display(Queue A);


#endif
