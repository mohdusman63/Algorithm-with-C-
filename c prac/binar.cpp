#include<stdio.h>
int main(){
	int rem,a[10],i=0,j,x,n;
	scanf("%d",&n);
	while(n!=0){
		rem=n%2;
		a[i]=rem;
		i++;
		x=i;
		n=n/2;
		
	}
	//printf("%d",x);
	for(i=x;i>0;i--	)
	printf("%d",a[i]);	
}
