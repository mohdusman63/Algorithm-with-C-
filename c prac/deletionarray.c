#include<stdio.h>
int main(){
	int arr[10],n,i,loc;
	printf("enter the array size");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("enter location for delete");
		scanf("%d",&loc);
       	for(i=loc;i<n-1;i++){
       		arr[i]=arr[i+1];
       		
		   }
		   for(i=0;i<n-1;i++){
		printf("%d\t",arr[i]);
	}
}
