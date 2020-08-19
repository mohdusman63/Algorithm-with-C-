#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int x,y,z,a,b,t;
	cin>>t;
	while(t--){
	
	cin>>x;
	cin>>y;
	cin>>z;
	a=abs(z-x);
	b=abs(z-y);
//	cout<<a<<b;
	if(a==b){
		cout<<"Mouse C";
		
	}
	else if(b<a){
		cout<<"Cat B";
		
	}
	else if(a<b){
		cout<<"Cat A";
	}
	
}
}
