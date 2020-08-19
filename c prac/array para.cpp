#include<stdio.h>
void func(int A[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",A[i]);
		
}
	}
	int main(){
		int A[5]={2,6,4,5,6};
		func(A,5);
		int x=sizeof(A)/sizeof(A[0]);
		printf("\n%d",x);
	}

