#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,x,k=0,c[200],res;
	vector<int>v;
	for(i=10;i<=15;i++){
		for(j=10;j<=15;j++){
			cout<<i<<"  "<<j<<endl;
			res=i^j;
			v.push_back(res);
		}
	}
	//for(i=0;i<v.size();i++)
	//cout<<v[i]<<endl;
	cout<< *max_element(v.begin(), v.end());
}
