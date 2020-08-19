#include<stdio.h>
int main(){
	int a[100],i,n,j,c=0,k=5;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if((a[i]+a[j])%k==0){
						printf(" %d+%d=%d",a[i],a[j],k);
						c++;
					}
				}
		}
		printf("\n       %d",c);
	
}
