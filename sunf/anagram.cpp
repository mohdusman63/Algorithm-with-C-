#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1="listen";
	string str2="silent";
	int h[26]={0},k[26]={0},i,j,count=0;
	for(i=0;i<str1.length();i++)
	h[str1[i]-97]++;
		for(i=0;i<str2.length();i++)
	k[str2[i]-97]++;
	for(i=0;i<26;i++){
		if(h[i]!=k[i]){
			count++;
			break;
		}
		
	}
	if(count>0)
	cout<<"not anagram";
	else
	cout<<"anagram";
	
}
