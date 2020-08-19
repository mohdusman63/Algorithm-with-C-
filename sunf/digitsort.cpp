#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=1203465;
	string y;
	y=to_string(x);
	int count[10]={0};
	for(int i=0;i<y.length();i++)
	count[y[i]-'0']++;
	for(int i=9;i>=0;i--){
	if(count[i]>0){
		cout<<i;
	}
	
	
}
}
