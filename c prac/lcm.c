#include<stdio.h>
int main(){
	int a,b,l;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	for(l=1;l<=a*b;l++){
		if(l%a==0 && l%b==0){
			break;
		}
	}
	printf("%d",l);
}
