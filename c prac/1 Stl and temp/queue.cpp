#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	queue<int>q;
	cin>>n;
	while(n--){
		cin>>x;
		q.push(x);
	}
	
	int item=q.front();
	cout<<"front element is "<<item<<endl;
	cout<<"back element is "<<q.back()<<endl;
	int y=q.front();
	q.pop();
	cout<<"poped element is  " <<y<<endl;
	cout<<"front elemnet is  "<<q.front();
}
