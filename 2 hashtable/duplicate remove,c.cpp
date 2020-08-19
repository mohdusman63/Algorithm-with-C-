#include<stdio.h>
int main(){
	int arr[10],b[10],i,j=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<4;i++){
		
			if(arr[i]!=arr[i+1]){
				b[j]=arr[i];
				j++;
			}
		
			}
		//	b[j]=arr[4];
			for(j=0;j<=3;j++){
				printf("%d\t",b[j]);
			}
			
		}
	
	
	

