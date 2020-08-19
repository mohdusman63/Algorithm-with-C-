#include<iostream>
using namespace std;
int main(){
	int r,a[10],n,i,temp;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter array element"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the term of rotation  example enter 1 "<<endl;
	cin>>r;
	while(r--){
	temp=a[0];
	for(i=0;i<n;i++)
	a[i]=a[i+1];
	a[n-1]=temp;
}
	for(i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
}
