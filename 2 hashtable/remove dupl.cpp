#include<stdio.h>
int main(){
    int H[100]={0},i,j,min,arr[10],max;
    printf("enter any five element in any order ");
    for(i=1;i<=5;i++){
    	scanf("%d",&arr[i]);
		}
		max=arr[1];
		min=arr[1];
	  for(i=1;i<=5;i++){
    	
    	if(max<arr[i]){
    		max=arr[i];
		}
		if(min>arr[i]){
    		min=arr[i];
		}
	}
			for(i=1;i<=5;i++){
		H[arr[i]]++;
	}
	for(i=1;i<=5;i++){
		
		if(H[i]>1){
		H[arr[i]]--;
	 }
}
for(i=min;i<=max;i++){
	if(H[i]==0)
	continue;
	
printf("\n%d" ,i);
}


}

