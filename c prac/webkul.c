#include<stdio.h>
int main(){
	int i,j,k=0;
	for(i=1;i<=11;i++){

      	for(j=1;j<=11;j++){
			if(i==1 ||j==1 && i<=5||i==5||j==11 &&i>=5 &&i<=9||i==9){
				printf("*");
		
				
			}
			else { 
				printf(" ");
				
			}
		}
		printf("\n");
	}
	
}
