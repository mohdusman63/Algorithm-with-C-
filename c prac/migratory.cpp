#include<stdio.h>
int main(){

int arr[10],i,j,k=0,c[10];
printf("enter array element");
for(i=0;i<=5;i++){
	scanf("%d",&arr[i]);
	
}

for(i=0;i<=5;i++){
	int count=0;
	for(j=0;j<=5;j++){
		if(arr[i]==arr[j]){
			count=count+1;
		    
		}
	}
//	printf("%d  %d\n",arr[i],count);
	c[k]=count;
		k++;
} 

for(k=0;k<=5;k++)
printf("%d\t",c[k]);

}
