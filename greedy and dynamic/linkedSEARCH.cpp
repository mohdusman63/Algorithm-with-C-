#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
}*first=NULL;
void create(int A[],int n){
	int i;
	struct node *t,*last;
	first=(struct node*)malloc(sizeof(struct node));
	first->data=A[0];
	first->next=NULL;
	last =first;
	for(i=1;i<n;i++){
		t=(struct node*)malloc(sizeof(struct node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void search(struct node *p,int key){

	while(p!=NULL){
		if(key==p->data)
		printf("found");
		else
		printf("not found");
		break;
		p=p->next;
	}	
	
}
int main(){
	struct node *temp;
	int A[]={3,5,7,10,25,8,32,2};
	int key=11;
	create(A,8);
	search(first,key);
}
	

