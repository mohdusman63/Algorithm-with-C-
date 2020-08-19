#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,res="";
	int i,j=0,l,H[26]={0};
	cin>>s;
	l=s.length();
	for(i=0;i<l;i++){
     if(H[s[i]-97]==0){
     	H[s[i]-97]=1;
     	res=res+s[i];
	 }
    
}
 cout<<res;

}

 
