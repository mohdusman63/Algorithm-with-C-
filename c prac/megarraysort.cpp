#include<stdio.h>
void merge(int A[],int B[],int n,int m){
int i=0,j=0,k=0,c[20];
while(i<m && j<n){
	if(A[i]<B[j]){
		c[k++]=A[i++];
		
	}
	else{
		c[k++]=B[j++];
	}
}
for(k=0;k<10;k++)
printf("%d\t",c[i]);

}



int main(){
	int A[5]={1,9,3,7,5,};
	int B[5]={2,4,6,8,10,};
	int m,n;
	m=sizeof(A)/sizeof(A[0]);
	n=sizeof(B)/sizeof(B[0]);
	merge(A,B,m,n);
}
