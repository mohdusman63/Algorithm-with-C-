#include<bits/stdc++.h>
using namespace std;
int main(){
int H[125]={0},i;
string s="";
string s2="aabbcdwwcads";
for(i=0;i<s2.length();i++){
	if(H[s2[i]]==0){
		H[s2[i]]=1;
		s=s+s2[i];
		}
}
cout<<s;

}
