#include<stdio.h>
#include<stdlib.h>
int main()

{
	int arr1[100][100],i,j,sum1=0,sum=0,r;
	printf("enter the rows ");
	scanf("%d",&r);
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
	if(i+j==r-1)
	
	{ 	printf("%d\t",arr1[i][j]);

				sum=sum+arr1[i][j];
	}
	 if(i==j)
	{
		printf("\n%d\t",arr1[i][j]);
	
	sum1= sum1+arr1[i][j];


	}
	
	}
	
	
	}
	printf("\n%d",sum1);
	printf("\n%d",sum);
	int z=abs(sum1-sum);
	printf("\n%d",z);
	}
			
