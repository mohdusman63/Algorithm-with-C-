#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,rem,a=5;
	vector<int>v;
	while(a>0){
		rem=a%2;
		v.push_back(rem);
		a=a/2;
		
	}
	reverse(v.begin(),v.end());
	for(i=0;i<v.size();i++)
	cout<<v[i];
}
