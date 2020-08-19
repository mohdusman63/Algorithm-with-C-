#include<iostream>
using namespace std;
int main(){
	int i,a=-1,b=1,c,n=5;
	for(i=2;i<=n+1;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c;
	}
}
