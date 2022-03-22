#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

int isFull(){
	if(top==MAX-1)
	 return 1;
	else
	 return 0;
}

int isEmpty(){
	if(top==-1)
	 return 1;
	else
	 return 0;
}

void push(int data){
	if(isFull()){
		printf("Stack overflow\n");
		return;
	}
	top = top +1;
	stack_arr[top]=data;
}

int pop(){
	int value;
	if(isEmpty()){
	printf("Stack underflow\n");
	exit(1);	
	}
	value=stack_arr[top];
	top=top-1;
	return value;
}
void print(){
	int i;
	if(isEmpty()){
	printf("Stack underflow\n");
	return;	
	}
	for(i=top;i>=0;i--)
	    printf("%d\n",stack_arr[i]);
    printf("\n");
}

int peek(){
	if(isEmpty()){
		printf("Stack underflow\n");
		return;
	}
	return stack_arr[top];
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	pop();
	pop();
	
	

	print();
	
	
return 0;	
}
