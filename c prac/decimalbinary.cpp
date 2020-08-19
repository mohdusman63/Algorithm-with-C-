#include<iostream>
using namespace std;
int main(){
	int rem,n,i=0,c=0,a[32];
	cin>>n;
	while(n>0){
	
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for( int j=i-1;j>=0;j--)
	cout<<a[j];
}
