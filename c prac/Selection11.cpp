#include<iostream>
using namespace std;
int main(){
	int arr[10],i,j,loc,temp,min,n;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		min=i;
	
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
			
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("sorted element is");
	for(i=0;i<n;i++){
		cout<<"\n";
		cout<<arr[i];
		
	}
}
