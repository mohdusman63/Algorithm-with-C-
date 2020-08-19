#include<bits/stdc++.h>
using namespace std;
int main(){
	int H[26]={0},i,j,c=0,t;
	string s1;
	cin>>t;
	while(t--){
	
	
	cin>>s1;
	for(i=0;i<s1.length();i++){
		if(s1[i]==s1[i+1]){
		
		s1.erase(i,1);
		i--;
		c++;
}
		}
		cout<<c;
//cout<<s1;
}
}
	
	
		

