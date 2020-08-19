#include<stdio.h>
int main(){
	int arr[10],i,j;
	printf("enter array element ");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("duplicate element is");
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if((arr[i]==arr[j]) && (i!=j)){
				printf("%d\n",arr[j]);
			}
		}
		
	}
	
}
