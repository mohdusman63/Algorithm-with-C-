#include<bits/stdc++.h>
using namespace std;
int main(){
	int h[26]={0},i,j;
	string str="geeksforgeeks";
	for(i=0;i<str.length();i++)
	h[str[i]-97]++;
	for(i=0;i<str.length();i++)
	{
		if(h[str[i]-97]!=0){
			cout<<str[i]<<h[str[i]-97]<<"  ";
			h[str[i]-97]=0;
			
		}
	}
	
}
