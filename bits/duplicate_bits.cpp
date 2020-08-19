#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="helllllow";
	int i,x=0;
	long int h=0;
	for(i=0;i<s.length();i++){
		x=1;
		x=x<<s[i]-97;
		if((x & h) >0)
		cout<<s[i]<<"  ";
		else {
		
		h=x|h;
		
	}
}
}
