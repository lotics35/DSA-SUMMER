#include <stdio.h>
#include <stdlib.h>
#include "QueueLinkList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Queue Q;
	
	initList(&Q);
	Enqueue(&Q,54);
	Enqueue(&Q,55);
	Enqueue(&Q,69);
	display(Q);
	Dequeue(&Q);
	display(Q);
	Dequeue(&Q);
	display(Q);

	
//	nPtr trav=Q.head;//test purposes
//	printf("%d\n",trav->data);
//	trav=trav->next;
//	printf("%d\n",trav->data);

//	Dequeue(&Q);
	
	
	return 0;
}
