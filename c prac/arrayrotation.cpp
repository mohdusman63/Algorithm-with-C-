#include<iostream>
using namespace std;
int main(){
	int r,a[10]={1,2,3,4,5,6,7,8,9,10},i,j,temp,n=10;
	cin>>r;
	while(r--){
		temp=a[n-1];
		for(i=n-1;i>=1;i--)
			a[i]=a[i-1];
			a[0]=temp;
			}
		
	
  for(i=0;i<n;i++){
	cout<<a[i]<<" ";

}}
