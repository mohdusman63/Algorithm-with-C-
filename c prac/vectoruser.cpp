#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	vector <int >v;
	cout<<"enter size of vector";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
		sort(v.begin(),v.end());
	}
	cout<<"output is:";
	for(int i=0;i<n;i++)
	cout<<"  "<<v[i]<<endl;
	 
	 reverse(v.begin(),v.end());
	 	cout<<"reverse is:";
	for(int i=0;i<n;i++)
	cout<<"  "<<v[i]<<endl;
	
}
