#include<stdio.h>
int main()
{
	int num,i,k,count=0;
	//scanf("%d",&n);
	for(num=2;num<=100;num++)
	{
		count=0;
		for(k=2;k<=num/2;k++){
			if(num%k==0){
				count++;
				break;
			}
		}
		if(count==0)
		printf("%d\t",num);
	}
}
