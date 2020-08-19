#include<bits/stdc++.h>
using namespace std;
int main(){
int i,x=12000000,c=0;
string s=to_string(x);
for(i=0;s[i]!='\0';i++){
	if(s[i]=='0')
	++c;

}
	cout<<c;



}
