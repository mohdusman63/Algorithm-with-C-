#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int>mp;
	int i,a[]={0,0,-1,-1,8,2,3,4,5},t=3;
	string name;
        while(t--){
        	cin>>name;
        	mp[name]++;}
	
		map<string,int>::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		cout<<it->first<<" ---> " <<it->second<<"  ";	
}
