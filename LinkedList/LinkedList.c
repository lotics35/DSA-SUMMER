#include <stdlib.h>
#include <stdio.h>


typedef struct node{
	int data;
	struct node *link;
}Node, *nPtr;

void initLinkList(nPtr *A){
	*A=NULL;
	printf("initialize success\n");
}

void insertFirst(nPtr *A,int elem){
	nPtr temp=(nPtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=elem;
		temp->link=*A;
		*A=temp;
		printf("\ninsert first success\n\n");
	}
}

void display(nPtr A){
	nPtr trav;
	printf("\nShowing information inside Linked List\n");
	for(trav=A;trav!=NULL;trav=trav->link){
		printf("trav->data=%d\n",trav->data);
	}
}

void insertLast(nPtr *A,int elem){
	nPtr temp=(nPtr)malloc(sizeof(Node));
	temp->data=elem;
	temp->link=NULL;
	nPtr trav=*A;
	while(trav->link!=NULL){
		trav=trav->link;
	}
	trav->link=temp;
	printf("\ninsert last success\n");
}

void insertIndex(nPtr *A,int elem, int index){
	int ctr;
	nPtr trav=*A;
	nPtr temp=(nPtr)malloc(sizeof(Node));
	temp->data=elem;
	for(ctr=0;ctr<index;ctr++){
		trav=trav->link;
	}
	temp->link=trav->link;
	trav->link=temp;
}

int main(){
	nPtr head;
	initLinkList(&head);
	
	insertFirst(&head,98);
	display(head);
	insertFirst(&head,42);
	display(head);
	insertLast(&head,69); 
	display(head);
	insertIndex(&head,12,1);//insert @index 1
	display(head);
	
	return 0;
}
