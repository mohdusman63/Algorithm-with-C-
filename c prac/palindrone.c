#include<stdio.h>
int main(){
	int x,rem,q=0,n;
	scanf("%d",&x);
	n=x;
	while(x!=0){
		rem=x%10;
		q=q*10+rem;
		x=x/10;
	}
	if(q==n){
		printf("palindrome");
	}
	else{
		printf("not a palindrome");
	}
}
