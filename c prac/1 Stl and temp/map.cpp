#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,string>mp;
mp[100]="usman";
mp[20]="abc";
mp[1]="xyz";
//mp.insert(pair<int,string>(4,"qwe"));
map<int ,string>::iterator it=mp.begin();
while(it!=mp.end()){
cout<<it->first<<"  "<<it->second<<endl;
it++;	
}
}
