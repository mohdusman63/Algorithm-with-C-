#include<stdio.h>
int main(){
	int r,x,n,i,fact,sum=0;
	printf("enter a number t check strong no");
	scanf("%d",&n);
	x=n;
	while(n>0){
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
	
		sum=sum+fact;
			n=n/10;
		
	}
	
	if(x==sum){
		printf("str0ng no");
	}
	
}

