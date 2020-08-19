#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=(n+1)/2;i++){

      	for(j=1;j<=2*n;j++){
      	  if(j>=n+n/2+2-i && j<=n+n/2+i){
			printf("*")	;
			}
	else { 
				printf(" ");
				
			}
		}
		printf("\n");
		}
		
		
		
		
			for(i=1;i<=n-1;i++){

      	for(j=1;j<=3*n;j++){
      	  if(i>=1&& i<=n-1 && j==n+1 || j==2*n)
			printf("a")	;
			else if (i==n-1 && j>=1 && j<=n  || i==n-1 && j>=n*2 && j<=n*3)
			printf("*");
			
	else { 
				printf(" ");
				
			}
		}
		printf("\n");
	}
	
	
	
	for(i=1;i<=n/2;i++){
		for(j=1;j<=3*n;j++){
			if(j>=i+1 && j<=n-i || j>=n*2+1+i && j<=n*3-i )
			printf("*");
		
		else
		printf(" ");
	}
		printf("\n");
	}
	
	
}
	

