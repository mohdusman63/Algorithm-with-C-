#include<stdio.h>
int main() 
{
	int i,j,k=1,n,ch;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++){
		for(j=1;j<=n+1;j++)
		{
		 if(j==1 && i<=n+1  )
	        printf("a");
	        else if(i==n+1 && j>=2 && j<=n+1 ){
	        	printf("*");
			}
	  
	        else{
	            printf("#");
				}
		}
			printf("\n");
 }
	for(i=1;i<=3*n+1;i++){
		for(j=1;j<=n*n-n+4;j++)
			{
				if((i>=1 && i<=n-1)&&(j>=n+k && j<=2*n-1+k))
				
				printf("*");
				else if(j==n*n-n+3 && i>=n-1 && i<=2*n-1)
				printf("a");
			
			else
			printf("$");
		}
		k=k+n-1;
		printf("\n");
}
}
	

	
	
	
	



	
	

