#include<stdio.h>
int fact(int);
int main(){
	int c,a;
		scanf("%d",&a);
	c=fact(a);


}
int fact(int x){
 int i,c=1;
 for(i=1;i<=x;i++)
c=c*i;
return c;
 
 
}

