#include<stdio.h>
int main(){
	int arr1[5],arr2[5],i,j,c[10],k=0,price,max;
	printf("enter the price");
	scanf("%d",&price);
	printf("enter the first array element");
	for(i=0;i<=2;i++){
		scanf("%d",&arr1[i]);
		
	}
		printf("enter the second  array element");
	for(i=0;i<=2;i++){
		scanf("%d",&arr2[i]);
		
	}
	printf("sum  array element is\n ");
		for(i=0;i<=2;i++){
			int z=arr1[i];
		//	printf("value of z is %d\n",z);
			for(j=0;j<=2;j++){
			
		c[k]=z+arr2[j];
		k=k+1;
	}
}
printf("\nsum is");
	for(k=0;k<=8;k++)
	printf("%d\n",c[k]);
	max=c[0];
	for(k=1;k<=8;k++)
	if(max<c[k]){
		max=c[k];
	}
//	printf("max value is %d",max);
	if(max<price){
		printf("yes money is sufficient it buy items %d ",max);
	}
	else if(max>price){
		printf("second largest number ");
	}
	
	
	
	
}
