#include<iostream>
using namespace std;
int main(){
	int i,n1,n2,gcd;
	cin>>n1;
	cin>>n2;
	for(i=1;i<=n1*n2;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	cout<<gcd;
}
