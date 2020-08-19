#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5},i,k=0;
	for(i=0;i<5;i++){
		k=k*10+a[i];
	}
	printf("%d",k+4);
}
