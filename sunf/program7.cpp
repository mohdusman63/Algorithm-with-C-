#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	cout<<"enter string";
	cin>>x;
	int i,l;
	l=x.length();
	//cout<<l;
	for(i=l-1;i>l-4;i--)
	cout<<char(x[i]-32);
}
