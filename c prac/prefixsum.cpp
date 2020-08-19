#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,a[10]={1,2,3,4,5},h[5];
	for(i=0;i<5;i++){
		h[i]=h[i-1]+a[i];
	}
	for(i=0;i<5;i++)
	cout<<h[i]<<endl;
	
	
}
