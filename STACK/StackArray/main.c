#include "StackArray.h"
#include <stdio.h>


//remember how my top works in stack

int main(){
	StackArrayList stack;
	initStack(&stack);
	
	display(stack);
	
	stack_push(&stack,10);
	stack_push(&stack,20);
	stack_push(&stack,30);
	
	display(stack); 
	stack_pop(&stack); 
	display(stack);
	stack_push(&stack,35);
	display(stack);
	stack_push(&stack,35);
	stack_push(&stack,70);
	stack_push(&stack,90); //Stack is full should not register
	display(stack);
	visualized(stack);
}
