#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "StackArray.h"

int main(){
	StackArrayList Stack;
	initStackArray(&Stack);
	
	Stack_Push(&Stack,5);
	Stack_Push(&Stack,6);
	Stack_Push(&Stack,0);
	
	display(Stack);
}
