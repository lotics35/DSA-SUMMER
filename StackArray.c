#include <StackArray.h>

void initStackArray(StackArrayList *S){
	S->top=0;
}

bool Stack_Push(StackArrayList *S, int elem){
	bool Pushed=0;
	if(S->top<MAX){
		S->data[top]=elem;
		S->top++;
		Pushed=1;
	}
	return Pushed;
}

bool Stack_Pop(StackArrayList *S){
	bool Popped=0;
	if(S->top==0){
		S->data[top]=0;
		S->top--;
		Pushed=1;
	}
	return Popped;
}

int Stack_Peek(StackArrayList *S){
	int topStack=S->data[top];
	return topStack;
}

void display(StackArrayList S){
	while(S->top>0){
		printf("Stack Position: %d - Value: %d", S->top,Stack_Peek());
		Stack_Pop(&S);
	}
}
