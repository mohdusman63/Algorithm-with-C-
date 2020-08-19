#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int arr[10],loc,i,j,n,element;
	printf("enter the no element");
	scanf("%d",&n);
	printf("enter the location you insert");
	scanf("%d",&loc);
	printf("enter the array element ");
	scanf("%d",&element);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=n-1;i>=loc;i--){
		arr[i+1]=arr[i];
	}
	arr[loc]=element;
	for(i=0;i<n+1;i++){
		printf("%d\t",arr[i]);
	}
}
