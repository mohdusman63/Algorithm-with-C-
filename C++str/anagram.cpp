#include<bits/stdc++.h>
using namespace std;
int main(){
	int H[26]={0},K[26]={0},i,l1,l2,flag=0;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	l1=s1.length();
	l2=s2.length();
	if(l1!=l2){
		cout<<"not anagram";
	}
	else{
	for(i=0;s1[i]!='\0';i++)
	H[s1[i]-97]++;
		for(i=0;s2[i]!='\0';i++)
	K[s2[i]-97]++;
	for(i=0;i<=25;i++)
	{
		if(H[i]!=K[i])
		flag=1;
	}
	if(flag==1)
	cout<<"not anagram";
	else
	cout<<"anagram";



	}}
	
	
	

