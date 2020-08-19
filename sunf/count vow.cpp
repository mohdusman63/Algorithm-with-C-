#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="aeiou";
	int c=0;
	for(int i=0;s[i]!='\0';i++){
		if(!(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u'|| s[i]=='i'))
		c++;
	
	cout<<c;
}}
