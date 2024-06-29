#ifndef Set
#define Set
#include <stdlib.h>
#include <stdio.h>

typedef int set;

void initSet(set **A, int *size);
void insertSet(set **A, int *size, int elem);
void displaySet(set *A, int size);
void deleteElem(set **A, int *size, int elem);
set *Union(set *A, set *B, int sA, int sB, int *sC);
set *Intersection(set *A, set *B, int sA, int sB, int *sD);

#endif
