#ifndef QueueArray
#define QueueArray
#define MAX 10
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{
	int data[MAX];
	int head;
	int tail;
}Queue;

void initQueue(Queue *A);
bool isEmpty(Queue A);
bool isFull(Queue A);
void Enqueue(Queue *A, int elem);
void Dequeue(Queue *A);
void display(Queue A);

void visualize(Queue A);

#endif
