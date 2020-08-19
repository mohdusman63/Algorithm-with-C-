#include<bits/stdc++.h>
using namespace std;
int main(){

	string str="abcd";
	int n,l;
	n=str.length();
	//cout<<l;
	for(int i=0 ;i<=n-1;i++){
	for(int l=1;l<=n-i;l++){
	
	
	 cout<<str.substr(i,l)<<endl;
	
	}//cout<<s<<endl;
}
}
