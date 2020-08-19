#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=20,i;
	cout<<"enter the bits num check set ";
	cin>>i;
	bool z=x & 1<<i;
	if(z==true)
	cout<<"yes set ";
	else
	cout<<"not";
	}
