#include<stdio.h>
int main(){
	int i,j,k=5;
	for(i=1;i<=5;i++){
		
		for(j=1;j<=5;j++){
			if(i==1 || i==5){
				printf("*");
		}
		else if(j>2 && j<4){
			printf("*");
		}
		
		else{
			printf(" ");
		}
		}
		
		printf("\n");
	
}}
