#ifndef Queue_LL
#define Queue_LL
#include <stdbool.h>

typedef struct node{
	int data;
	struct node *link;
}Node, *NodePtr;

typedef struct{
	NodePtr front;
	NodePtr rear;
}Queue;

void initQueue(Queue *A);
bool isEmpty(Queue*A);
bool Enqueue(Queue *A, int elem);
bool Dequeue(Queue *A);
int Front(Queue A);
int Rear(Queue A);
void display(Queue A);

#endif
