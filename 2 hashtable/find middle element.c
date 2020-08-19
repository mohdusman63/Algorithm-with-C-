#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	struct node temp=(struct node)malloc(sizeof(struct node));
	temp->data=12;
	struct node p=(struct node)malloc(sizeof(struct node));
	p->data=23;
	temp->next=p;
	p->next=Null;
	while(temp){
		printf(temp->data);
		temp=temp->next;
	}
	return 0;
}
