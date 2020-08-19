#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
		for(i=1;i<=(n+1)/2;i++){

      	for(j=1;j<=n+n/2;j++){
		  
			if(j>=n/2+i &&j<=n+n/2+1-i)
				printf("*");
			
				else
					printf(" ");
					}
				printf("\n");
				
			}
			
				for(i=(n+1)/2+1;i<=n+n/2+1;i++){

      	for(j=1;j<=n;j++){
			if(i==(n+3)/2||j==1 && i>=(n+3)/2||j==n && i>=(n+3)/2 ){
				printf("*");
		
				
			}
			else { 
				printf(" ");
				
			}
		}
		printf("\n");
	}
	
}	
			

