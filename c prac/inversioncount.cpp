#include<iostream>
using namespace std;
int main(){
	int arr[10],i,j,c=0;
cout<<"enter aray element";
	for(i=1;i<=5;i++){
		cin>>arr[i];
		
	}
	for(i=1;i<=4;i++){
		for(j=i+1;j<=5;j++){
			if(arr[i]>arr[j]){
				c++;
			}
		}
	}
	cout<<c;
	
}
