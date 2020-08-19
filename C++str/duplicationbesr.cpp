#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int i,j=0,l,H[26]={0};
	cin>>s;
	l=s.length();
	for(i=0;i<l;i++)
		H[s[i]-97]++;
		
     	for(i=0;i<l;i++)
     	{
     		if(	H[s[i]-97]>0){
     			cout<<s[i]<<H[s[i]-97]<<" ";
     			H[s[i]-97]=0;
     			
			 } 
		 }


}
