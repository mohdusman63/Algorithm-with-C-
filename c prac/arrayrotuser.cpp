#include<iostream>
using namespace std;
int main(){
	int n,a[10],i,temp,r;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>r;	
	while(r--){
		temp=a[n];
		for(i=n;i>=1;i--)
		  a[i+1]=a[i]; 
		  a[1]=temp;
	}
	for(i=1;i<=n;i++){
	cout<<"rotate vlue is "<<a[i]<<endl;
	
}}
