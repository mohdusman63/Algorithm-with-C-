#include<stdio.h>
int main(){
	int arr[10],c,d,i,j,acount=0,bcount=0;
	printf("enter array element\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
		
		
	}
	for(i=0;i<3;i++){
		c=arr[i];
		d=arr[i+1];
		if(arr[i]<arr[i+1]){
			acount++;
			break;
			
		}
		else if(arr[i]>arr[i+1]){
			bcount++;
			break;
		}
		
	}
//	printf("%d\n %d",acount,bcount);
	printf("%d\n %d",c,d);
	
	
	
	
	
	
}
