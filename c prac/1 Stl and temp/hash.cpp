#include<bits/stdc++.h>
using namespace std;
int main(){
	int f=0, H[25]={0},K[25]={0},i,j,l1;
	string s,t;
	cin>>s;
	cin>>t;
	l1=s.length();
	cout<<l1;
	for(i=0;i<l1-1;i++)
	H[s[i]-97]++;
		for(i=0;i<l1-1;i++)
	K[t[i]-97]++;
		for(i=0;i<26;i++)
	     if(H[i]!=K[i]){
	     	f=1;
		 }
		 if(f==1)
		 cout<<"not";
		 else
		 cout<<"yes";
}
