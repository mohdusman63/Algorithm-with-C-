#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
			for(j=1;j<=18;j++){
			if( j>=4-i && j<=5+i ||j>=13-i && j<=16+i){
				printf("*");
					}
	else{
			printf(" ");
		}
		
	}
printf("\n");
	}
	k=0;
	for(i=1;i<=18;i++){
		
			for(j=1;j<=20;j++){
				
			if( j>=i && j<=19-i){
				
				printf("*");
				
				
					}
					
	else{
			printf(" ");
		}
		
	}
printf("\n");
	}
	
	
	 
}
