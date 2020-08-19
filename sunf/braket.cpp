#include<bits/stdc++.h>
using namespace std;
int main(){
	string str="({)}";
	int i,s=0,c=0,b=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='('){
			s++;
		}
		else if(str[i]==')')
		s--;
		else if(str[i]=='{')
		c++;
		else if(str[i]=='}')
		c--;
	}
	if(s==0 && c==0)
	cout<<"yes matching";
	else
	cout<<"not matching";
	
}
