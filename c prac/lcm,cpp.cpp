#include<iostream>
using namespace std;
int main(){
	int i,n1,n2,gcd;
	cin>>n1;
	cin>>n2;
	for(i=1;i<=n1*n2;i++)
		if(i%n1==0 && i%n2==0)
		break;
		
	
	cout<<i;
}
