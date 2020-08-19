#include<stdio.h>
int main(){
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){

      	for(j=1;j<=n;j++){
      		if(i)
			if(j>=i &&j<=n+1-i)
				printf("*");
				
		
				
			
			else { 
				printf(" ");
				
			}
		}
		printf("\n");
	}
	
	
}
