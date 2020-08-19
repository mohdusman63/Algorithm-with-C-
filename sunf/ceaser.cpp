#include<bits/stdc++.h>
using namespace std;
int main(){
		int i,n,l,r;
		string s;
	    string result="";
		cin>>l;
		cin>>s;
		cin>>r;
	for(i=0;i<l;i++){
		if(s[i]>=97 && s[i]<=122)	
		result=result+char(int(s[i]+r-97)%26+97);	
		else if(s[i]>=65 && s[i]<=90)
		result=result+char(int(s[i]+r-65)%26+65);
		else
		result=result+s[i];
}
	
	cout<<result;
	
	
    
}

