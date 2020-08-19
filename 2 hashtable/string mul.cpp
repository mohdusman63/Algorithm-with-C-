#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="123";
	string s1=s;
	int k;
	cin>>k;
	for(int i=1;i<k;i++)
	s1=s1+s;
	cout<<s1;
	int j=stoi(s1);
	cout<<j+4;
	
}
