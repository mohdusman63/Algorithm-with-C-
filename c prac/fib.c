       // FIBONACCI SERIES
#include<stdio.h>
int main(){
	
	int c,i,a=-1,b=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
