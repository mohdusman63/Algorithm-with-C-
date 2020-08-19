#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *root=NULL;
void append();
void display();
int main(){
	int ch;
	while(1)
	{
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch){
	case 1:
    append();
	break;
	case 2:
	 display();
	break;
	case 3:
		exit(1);
        }
   }
}
void append(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct node *p;
		p=root;
		while(p->link!=NULL){
			p=p->link;
			}
		p->link=temp;	
		
	}
}
	void display(){
		struct node *temp;
		temp=root;
		if(temp==NULL){
			printf("No element is in list\n");
			
			
		}
		else{
			while(temp!=NULL){
				
				printf("%d--->",temp->data);
				temp=temp->link;
			
			}
			printf("\n\n");
			
		}
	}
