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
void max(struct node *p){
	int maximum=0;
	while(p!=NULL){
		if(p->data>maximum)
			maximum=p->data;
		p=p->next;
	}	

	printf("%d  ",maximum);

}
int main(){
	struct node *temp;
	int A[]={3,5,7,10,25,8,32,2};
	create(A,8);
	max(first);
}
	

