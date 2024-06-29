#include "Set.h"


void initSet(set **A, int *size){
	*A=NULL;
	*size=0;
}

void insertSet(set **A, int *size, int elem){
  int ctr=0;
  while(ctr<(*size)&&(*A)[ctr]!=elem)
    ctr++;
  if( ctr < (*size) && (*A)[ctr] == elem){
  	printf("Element already exists \n");
  }
  else{
    (*size)++;
    *A=(set*)realloc(*A, (*size)*sizeof(set));
  	(*A)[(*size)-1]=elem;
  }
}

void displaySet(set *A, int size){
	int ctr;
	for(ctr=0;ctr<size;ctr++){
		printf(" %d ", A[ctr]);
	}
	printf("\n");
}

void deleteElem(set **A, int *size, int elem){
	int ctr=0;
	while(ctr<(*size)&&(*A)[ctr]!=elem){
		ctr++;
	}if(ctr>=(*size)){
		printf("Element does not exist\n");
	}else{
		while(ctr<(*size)-1){
			(*A)[ctr]=(*A)[ctr+1];
			ctr++;
		}
		(*size)--;
		*A=(set*)realloc(*A,(*size)*sizeof(set));
	}
}

set *Union(set *A, set *B, int sA, int sB, int *sC){
	set *U=NULL;
	int ctr;
	
	
	*sC=sA;
	U=A;
	for(ctr=0;ctr<sB;ctr++){
		insertSet(&U,sC,B[ctr]);
	}
	
	return U;
}

set *Intersection(set *A, set *B, int sA, int sB, int *sD){
	set *I=NULL;
	int ctr, ctr2;
	
	for(ctr=0;ctr<sA;ctr++){
		for(ctr2=0;ctr2<sB;ctr2++){
			if(A[ctr]==B[ctr2]){
				insertSet(&I,sD,A[ctr]);
			}
		}
	}
	
	return I;
}

