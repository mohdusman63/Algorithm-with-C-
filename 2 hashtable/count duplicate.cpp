 #include<stdio.h>
int main(){
	int max,arr[10],i,count,j,c[5],k=0,x,z=0,y[10];
	printf("enter the array elemenet");
	for(i=0;i<8;i++){
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<8;i++){
		count=0;
		for(j=0;j<8;j++){
			
			if(arr[i]==arr[j]){
				count=count+1;
			
			
				
			}
			
		}
		
              
	           c[k]=count;
				k++;
	}
//	printf("value of z is %d  ",z);

	
	for(k=0;k<8;k++)
	
	printf("%d",c[k]);
		for(k=0;k<8;k++){
		
	if(c[k]>1){
		x=c[k]/2;
		z=z+x;
	}
	}
	printf("%d\n",z);

}
