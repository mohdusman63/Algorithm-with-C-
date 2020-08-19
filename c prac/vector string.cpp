#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string x;
	vector <string >v;
	cout<<"enter size of vector";
	cin>>n;
	for(int i=0;i<=n;i++){
		//cin>>x;
		getline(cin,x);
		v.push_back(x);
		sort(v.begin(),v.end());
	}
	cout<<"sorted order is:";
	for(int i=0;i<=n;i++)
	cout<<"  "<<v[i]<<endl;
	 
	 reverse(v.begin(),v.end());
	 	cout<<"revers is:"<<endl;
	for(int i=0;i<n;i++)
	cout<<"  "<<v[i]<<endl;
	
}
