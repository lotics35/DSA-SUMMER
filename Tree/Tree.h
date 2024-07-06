#ifndef Tree
#define Tree
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	int day,month,year;
}Date;

typedef struct{
	char prodName[20];
	float prodPrice;
	int prodQty;
	Date expdate;
}Product;

typedef struct node{
	Product item;
	struct node *left, *right;
}Nodetype, *nodePtr;

#endif
