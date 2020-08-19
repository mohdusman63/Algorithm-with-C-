#include<stdio.h>
int main(){
	int i,j,n;
	for(i=1;i<=10;i++){
		for(j=1;j<=9;j++){
			if(j>=5-i && j<=3+i){
				printf("*");
			}
				else if(j==3){
					printf("*");
				}
		
			else{
				printf("#");
			}
		}
		printf("\n");
	}
}
