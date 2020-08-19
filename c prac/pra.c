#include<bits/stdc++.h>
using namespace std;
int main(){
	int H[26]={0},i,l;
	string s;
	cin>>s;
	l=s.length();
	for(i=0;i<l;i++)
	H[s[i]-97]++;
		for(i=0;i<l;i++){
			if(	H[s[i]-97]>0)
			cout<<"  "<<s[i]<<"  "<<H[s[i]-97]++;
				H[s[i]-97]=0;
		}
	
}
