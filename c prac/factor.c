#include<stdio.h>
int main(){
	int t,i,n,j,c[5];
	printf("enter the test case");
	scanf("%d",&t);
	while(t--){
	
	
		printf("nenter the number you want factor");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
		
			if(n%i==0){
			//	printf("%d\t",i);

			for(j=1;j<=n;j++){
			
				c[j]=i;
				
		printf("%d\t",c[j]);
		break;
		}
		  
				
			}
			} 
			
		}
				
			
			}
		
			
		
		
		
	
	

