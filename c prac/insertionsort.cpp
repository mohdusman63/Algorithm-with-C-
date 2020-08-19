#include<stdio.h>
int main(){
	int i,j,arr[6],temp;
	printf("enter the value for selection sort\n");
	for(i=0;i<=5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=5;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			
			arr[j+1]=arr[j];
			j--;
}
 		arr[j+1]=temp; 
 }
	printf("sorted element is\n");
	for(i=0;i<=5;i++){
		printf("%d\n",arr[i]);
	}
}
