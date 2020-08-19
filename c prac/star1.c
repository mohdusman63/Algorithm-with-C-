#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		//f(i=2||i==5 ?k+2:k-- )
			for(j=1;j<=9;j++){
			if( i==2&&j<=i+1||i==5 &&j<=i||j==2 ){
				printf("*");
					}
	else{
			printf(" ");
		}
		
	}
printf("\n");
	}
	 
}
