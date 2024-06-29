#include <stdio.h>
#include <stdlib.h>
#include "Set.h"

int main(){
	set *A, *B, *C,*D;
	int sA=1, sB=2, sC=3, sD=4;
	
	initSet(&A,&sA);
//	printf("%d", sA);

	insertSet(&A, &sA, 1);
	insertSet(&A, &sA, 1);
	displaySet(A, sA);
	insertSet(&A, &sA, 2);
	displaySet(A, sA);
	insertSet(&A, &sA, 3);
	insertSet(&A, &sA, 4);
	displaySet(A, sA);
	
	initSet(&B,&sB);
	insertSet(&B, &sB, 5);
	displaySet(B, sB);
	insertSet(&B, &sB, 6);
	insertSet(&B, &sB, 7);
	displaySet(B, sB);
	
	deleteElem(&A,&sA,3);
	deleteElem(&A,&sA,3);
	displaySet(A, sA);
	
	initSet(&C,&sC);
	C=Union(A,B,sA,sB,&sC);
	displaySet(C, sC);

	initSet(&D, &sD);
	insertSet(&B, &sB, 4);
	D=Intersection(A,B,sA,sB,&sD);
	displaySet(D, sD);

	return 0;
}
