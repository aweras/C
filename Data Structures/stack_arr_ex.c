#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack_arr[MAX];
int first = -1;
int isEmpty(){
	if(first == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(){
	if(first==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int data)
{
	int i;
	if(isFull()){
		printf("Stack overflow");
		exit(1);
	}
	first += 1;
	for(i=first; i>0; i--){
		stack_arr[i]=stack_arr[i-1];
		}
	stack_arr[0]=data;
}

int pop(){
	int i,value;
	if(isEmpty()){
		printf("Stack underflow");
		exit(1);
	}
	value = stack_arr[0];
	for(i=0;i<first;i++){
		stack_arr[i]=stack_arr[i+1];
	}
	first-=1;
	return value;
}

int peek(){
	if(isEmpty()){
		printf("Stack underflow\n");
		exit(1);
	}
	return stack_arr[0];
}

void print(){
	int i;
	if(first == -1){
		printf("Stack underflow");
		exit(1);
	}
	for(i=0;i<=first;i++){
		printf("%d",stack_arr[i]);
		printf("\n");
	}
}

int main(){
	push(30);
	push(90);
	push(150);
	pop();
	push(60);
	
	print();
	printf("Top element is %d",peek());
	return 0;
}
