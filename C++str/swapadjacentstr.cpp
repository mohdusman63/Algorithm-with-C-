#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,p;
	int i,j=0,l;
	cin>>s;
	l=s.length();
	for(i=0;i<=l;i=i+2){
     swap(s[i],s[i+1]);
    
}
 cout<<s<<endl;
cout<<l;
}


