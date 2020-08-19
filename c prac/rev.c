#include<stdio.h>
int main(){
	int n,q=0,rem;
printf("enter the number ");
scanf("%d",&n);
while(n!=0){
	rem=n%10;
	q=q*10+rem;
	n=n/10;
	

}  
printf("%d",q);
}

