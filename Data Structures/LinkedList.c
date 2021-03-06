#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void printList(struct Node* n){
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
}

void push(struct Node** head_ref,int new_data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data =new_data;
	new_node->next =(*head_ref);
	(*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node,int new_data){
	if(prev_node==NULL){
		printf("the given previous node cannot be NULL");
		return;
	}
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}

void append(struct Node** head_ref,int new_data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL){
		*head_ref=new_node;
		return;
	}
	while(last->next != NULL){
		last = last->next;
	}
	last->next=new_node;
	return;
}



int main(){
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	head =(struct Node*)malloc(sizeof(struct Node));
	second =(struct Node*)malloc(sizeof(struct Node));
	third =(struct Node*)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	push(&head,5);
	insertAfter(head->next,10);
	append(&head,15);
	printList(head);
	
	return 0;
}
