#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue A;
	initQueue(&A);
	
	Enqueue(&A, 9);//1
	Enqueue(&A, 35);//2
	Enqueue(&A, 77);//3
	Enqueue(&A, 69);//4
	Enqueue(&A, 81);//5
	Enqueue(&A, 101);//6
	Enqueue(&A, 1);//7
	Enqueue(&A, 1000);//8
	Enqueue(&A, 500);//9
//	visualize(A);
	display(A);
	Dequeue(&A);
	display(A);
	
	return 0;
}
