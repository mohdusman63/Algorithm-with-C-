#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={3,1,2,2,3},i;
	int res=a[0];
	for(i=1;i<=4;i++){
		res=res^a[i];
		
	}
	cout<<res;
}
