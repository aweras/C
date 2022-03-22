#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int que_arr[MAX];
int top,last=-1;


int isEmpty(){
	int que;
	que=last-top;
	if(que<=0){
		return 1;
	}
	else {
		return 0;
	}
}


void enque(int data){
	
	if(top==-1){
		top=top+1;
		last=last+1;
		que_arr[last]=data;
	}
	else{
		last=last+1;
		que_arr[last]=data;
	}
}
int deque(){
	int val;
	if(isEmpty()){
		printf("Stack underflow");
		exit(1);
	}
	val=que_arr[top];
	top=top+1;
	return val;
	}


int peek(){
	if(isEmpty()){
		printf("Stack underflow");
		exit(1);
	}
	return que_arr[top];
}

void print(){
	int i;
	if(isEmpty()){
		printf("Stack underflow");
		exit(1);
	}
	for(i=top;i<=last;i++){
		printf("%d\n",que_arr[i]);
	}
}
int main(){
	
    enque(5);
    enque(10);
    enque(15);
    enque(20);
   
    
    
    
	
	print();
	
	
	
	
	
return 0;
}

	
	
	
	
	
	
	
	
