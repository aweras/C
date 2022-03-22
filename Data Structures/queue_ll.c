
#include <stdlib.h>
#include <stdio.h>

struct node{
	int data;
	struct node* link;
} *top=NULL; *last=NULL;

int isEmpty(){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void enque(int data){
	struct node* newNode;
	newNode=malloc(sizeof(newNode));
	if(top==NULL){
	newNode->data=data;
	newNode->link=NULL;
	last=newNode;
	top=newNode;
    }
    else{
    	struct node* temp;
    	temp=last;
    	temp->link=newNode;
    	newNode->data=data;
    	newNode->link=NULL;
    	last=newNode;
	}
}

int deque(){
	struct node* temp;
	temp=top;
	if(isEmpty()){
		printf("Stack Underflow.");
		exit(1);
	}
	int val=top->data;
	top=top->link;
	free(temp);
	temp=NULL;
	return val;
}

int peek(){
	struct node* temp;
	temp=last;
	if(isEmpty()){
		printf("Stack Underflow.");
		exit(1);
	}
	return temp->data;
}

void print(){
	struct node* temp;
	temp=top;
	if(isEmpty()){
		printf("Stack Underflow.");
		exit(1);
	}
	while(temp){
		printf("%d\n",temp->data);
		temp=temp->link;
		}
}

void reverse(){

	int data = top->data;
	deque();
	
	enque(data);
}
	





int main(){
	enque(5);
	enque(10);
	enque(15);
	enque(20);
	reverse();

	
	print();
	return 0;
}








