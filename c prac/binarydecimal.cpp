#include<bits/stdc++.h>
using namespace std;
int main(){
	int rem,n,i=0,c=0,a[32];
	cin>>n;
	while(n>0){
	
		rem=n%10;
		c=c+pow(2,i)*rem;
		i++;
		n=n/10;
	}
	
	cout<<c;
}
