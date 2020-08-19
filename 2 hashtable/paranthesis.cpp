#include<iostream>
#include<stack>
using namespace std;
bool balPar(string exp){
	stack<char> stack;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='(' || exp[i]=='{' ||exp[i]=='['){
			stack.push(exp[i]);
		}
			if(exp[i]==')' || exp[i]=='}' ||exp[i]==']'){
				if(stack.empty()){
					return false;
				}
				char top=stack.top();
				stack.pop();
				if((top=='(' && exp[i]!=')')||(top=='{' && exp[i]!='}')||(top=='[' && exp[i]!=']')){
					return false;
				}
		
	}
  }
  return stack.empty();
}
int main(){
	string exp="{()}[{}]";
	if(balPar(exp))
	cout<<" balance paranthesis";
	else
	cout<<"not balace";
	return 0;
}
