#include<bits/stdc++.h>
using namespace std;
string parth(string s){
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='{'){
			st.push(s[i]);
		}
		else if(s[i]==')' && st.top()=='(')
		 st.pop();
		 else if(s[i]=='}' && st.top()=='{')
		 st.pop();
	}
	return st.empty()?"yes":"no";
}

int main(){
	string s="({})(){";
	cout<<parth(s);
}
