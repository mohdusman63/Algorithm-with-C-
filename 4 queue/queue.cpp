#include<bits/stdc++.h>
using namespace std;
struct Queue{
	int size;
	int rear;
	int front;
	int *Q;
};

void create(struct Queue *q,int size){
	q->front=-1;
	q->rear=-1;
	q->Q=(int*)malloc(q->size*sizeof(int) );
}
void enqueue(struct Queue *q,int x)
{
if(q->rear==q->size-1)
printf("Queue is Full");
else
{
q->rear++;
q->Q[q->rear]=x;
}
}
void Display(struct Queue q)
{
int i;
for(i=q.front+1;i<=q.rear;i++)
printf("%d ",q.Q[i]);
printf("\n");
}

int main(){
	struct Queue q;
	create(&q,5);
	enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,20);
    Display(q);
	
}
