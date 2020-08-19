#include<stdio.h>
int main(){
	int i,j,k=0,n;
	scanf("%d",&n);
	
	for(i=1;i<=4;i++){

      	for(j=1;j<=14;j++){
      	  if(j>=n+n/2+2-i && j<=n+n/2-i){
			
			
				printf("*");
	}
		else { 
				printf(" ");
				
			}
		}
		printf("\n");
		}
		
	}
	
	

