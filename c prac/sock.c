#include<stdio.h>
int main(){
	int arr[10],count=0,i,j;
	printf("enter the arry element");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<5;i=i+2){
		if(arr[i]==arr[i+1]){
			count++;
			//i=i+2;
		} 
		
		
		
	}
	printf("%d",count);
	
}
