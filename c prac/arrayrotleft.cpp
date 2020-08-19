#include<iostream>
using namespace std;
int main(){
	int r,a[1000],i,j,temp,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"r";
	cin>>r;
	while(r--){
		temp=a[0];
		for(i=0;i<n;i++){
			a[i]=a[i+1];
			a[n-1]=temp;
		}
		
	}
		
  for(i=0;i<n;i++){
	cout<<a[i]<<endl;
}
}
