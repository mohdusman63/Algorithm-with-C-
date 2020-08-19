#include<stdio.h>
int main(){
	int x;
	printf("enter the year check leap or not");
	scanf("%d",&x);
	if(x%4==0 && x%400==0){
		printf("year is leap");
		
	}
	else{
		printf("nota leap year");
	}
}
