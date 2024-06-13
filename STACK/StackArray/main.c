#include "StackArray.h"
#include <stdio.h>

int main(){
	StackArrayList stack;
	initStack(&stack);
	
	stack_push(&stack,10);
	stack_push(&stack,20);
	stack_push(&stack,30);
	
	display(stack);
	stack_pop(&stack);
	display(stack);
}
