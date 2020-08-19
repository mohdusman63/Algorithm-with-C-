#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10],i,j,res;
	for(i=0;i<5;i++)
	cin>>a[i];
	res=a[0];
    for(i=1;i<5;i++)
     res=res^a[i];	
	cout<<res;
}
