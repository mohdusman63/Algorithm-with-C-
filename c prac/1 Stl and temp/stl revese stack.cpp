#include<bits/stdc++.h>
using namespace std;
stack<int > st;
void push_digit(int n){
	while(n!=0){
		st.push(n%10);
		n=n/10;
			}
}
int reverse(int n){
	push_digit(n);
	int rev=0,i=1;
	while(!st.empty()){
		rev=rev+st.top()*i;
		st.pop();
		i=i*10;
	}
	return rev;
}
int main(){
	int n=678910;
	cout<<reverse(n);
}

