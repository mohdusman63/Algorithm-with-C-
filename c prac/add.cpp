#include<stdio.h>
void add();
int x=20;
void sub();
int main(){
	add();
	sub();
	return 0;
}
void add(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d\n",c);
}
void sub(){
printf("%d",x);	
}

