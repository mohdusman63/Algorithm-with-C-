#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,item;
	stack<int>st;
	cout<<"enter the number element in stack"<<endl;
	cin>>n;
	while(n--){
		cin>>x;
		st.push(x);
	}
	cout<<"top element is befor pop is: "<<st.top()<<endl;
	item=st.top();
	st.pop();
	cout<<"poped element is"<<item<<endl;
	cout<<"top element is: "<<st.top()<<endl;

	
}
