#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
} *top=NULL;

int isEmpty(){
	if(top==NULL)
	 return 1;
	else
	 return 0;
}

void push(int data){
	struct node* newNode;
	newNode=malloc(sizeof(newNode));
	if(newNode==NULL){
		printf("Stack overflow");
		return;
	}
	newNode->data=data;
	newNode->link=NULL;
	
	newNode->link=top;
	top=newNode;
}

int pop(){
	struct node* temp;
	temp=top;
	if(isEmpty()){
		printf("Stack underflow");
		exit(1);
	}
	int val=temp->data;
	top=top->link;
	free(temp);
	temp=NULL;
	return val;	
}

void print(){
	struct node* temp;
	temp=top;
	if(isEmpty()){
		printf("Stack underflow");
		return;
	}
	while(temp){
		printf("%d",temp->data);
		temp=temp->link;
	}
	
}

int peek(){
	if(isEmpty()){
		printf("Stack underflow");
		return;
	}
	
	return top->data;
	
}








