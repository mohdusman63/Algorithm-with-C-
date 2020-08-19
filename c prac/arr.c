#include<stdio.h>
int main()
{
	int arr1[10],arr2[10],i,j,c[10],temp,k=0;
	printf("enter first array element");
	for( i=0;i<3;i++)
	scanf("%d",&arr1[i]);
	printf("\nenter second array element");
	for( i=0;i<3;i++)
	scanf("%d",&arr2[i]);
	for(i=0;i<3;i++){
	
	temp=arr1[i];
	
		for(j=0;j<3;j++)
		{
			c[k]=temp+arr2[j];
			k=k+1;		}
	}
	printf("merge value\n");
	for(k=0;k<9;k++)
	printf("%d\n",c[k]);
	
}

