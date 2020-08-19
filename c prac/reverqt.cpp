#include<stdio.h>
int main(){
	int n,sum=0,odd=0,rem,c[10],i=0,arr[10];
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0){	
		rem=n%10;
		c[i]=rem;
		i++;
		n=n/10;
	}
	for(i=0;i<4;i++){
	
	//printf("%d",c[i]);
	if(i%2==0){
		sum=sum+c[i];
		
	}
	else{
		odd=odd+c[i];
	}
	}
	printf("\n%d   %d" ,sum,odd );
}
