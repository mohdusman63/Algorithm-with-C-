#include<stdio.h>
#include<math.h>
int main(){
	int a=0,b=2,i,n,sum=0,arr[20],x;

	for(n=1;n<10;n++){
		
    x=pow(2,n-1);
    sum=sum+a+x*b;
    arr[n]=sum;
   
}	
      	for(n=1;n<10;n++)
      
	printf("%d\n",arr[n]);

}
