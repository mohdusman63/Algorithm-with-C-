#include<stdio.h>
int main(){
	int arr[10],arr1[5],arr2[5],i;
	
	//printf("enter first element");
	for(i=0;i<5;i++){
		
		scanf("%d",&arr1[i]);
	}
	printf("enter second element");
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<10;i++){
		if(i<5){
			arr[i]=arr1[i];
		}
		arr[i]=arr2[i];
		
	}
		for(i=0;i<10;i++){
			printf("%d",arr[i]);
		}
}
