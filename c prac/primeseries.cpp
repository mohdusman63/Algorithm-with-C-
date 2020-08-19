#include<stdio.h>
int main(){
	int num,i,count,sum=0;
	for(num=2;num<=1000;num++){
		count=0;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				count++;
				break;
			}
		}
			if(count==0 ){
				printf("%d\t",num);
//				sum=sum+num;
				
			}
	}
	//printf("%d",sum);

	
	
}
