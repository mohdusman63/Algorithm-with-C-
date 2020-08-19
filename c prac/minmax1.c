#include<stdio.h>
int main(){
  unsigned long long  arr1[5],i,sum=0,min,max,maxsum,minsum;
	for(i=0;i<5;i++){
		scanf("%llu",&arr1[i]);
		sum=sum+arr1[i];
	}
		min=arr1[0];
		max=arr1[0];
	//printf("%d",sum);
	//printf("maximum element is");
	for(i=1;i<5;i++){
	
		if(arr1[i]<min){
			min=arr1[i];
		}
		if(max<arr1[i]){
			max=arr1[i];
			
		}
	}
//	printf("%d\n%d\n",max,min);
	maxsum=sum-min;
	minsum=sum-max; 
	printf("%llu %llu",minsum,maxsum);
	
	
	
}
