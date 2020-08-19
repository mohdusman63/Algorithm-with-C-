#include<stdio.h>
int main(){
	int a[10]={1,3,3,4,4,4},n,i,max,x;
	int H[10]={0},k=0,c[10];
	for(i=0;i<=5;i++){
		H[a[i]]++;
		}
		for(i=0;i<=5;i++){
			if(H[i]>=0){
				c[k]=H[i];
				k++;
			printf("%d  %d\n",i,H[i]);
		
			}
				
		}
			//printf("\n count is=%d\n ",H[4]);
		printf("count value is:");
	for(i=0;i<k;i++){
		
		printf("\n%d",c[i]);
       }
       
       max=H[0];
       	for(i=0;i<=5;i++){
       		
       		if(max<H[i]){
			   max=H[i];
			   x=i;
		   }
	}
		   printf("\n max occurence is %d no is  %d",max,x);
}
