#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	
	cin>>t;
	map<string ,string>mp;
	while(t--){
		string s;
		string country;
		cin>>s;
		cin>>country;
		mp[s]=country;                   //mp[s]++;
	}
		map<string ,string>::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		cout<<it->first<<"   "<<it->second<<" ";
}
