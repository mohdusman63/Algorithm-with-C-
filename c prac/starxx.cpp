#include<stdio.h>
int main() 
{
	int i,j,k=2,ch;
	scanf("%d",&ch);
	switch(ch){
		case 2:
	
	for(i=1;i<=14;i++){
		for(j=1;j<=25;j++){
			
		if(j>=2  && i==4 && j<=5 || i==5 && j>=5 && j<=8){
				printf("*");
				
			}
			else if(j==1 && i<=3 || j==9 && i>=5 && i<=7)
			printf("a");
			else
			printf(" ");
	 }
		printf("\n");
	}
	default :
		printf("none");
	}

	
	
}
