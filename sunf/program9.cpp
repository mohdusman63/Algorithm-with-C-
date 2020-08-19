#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10],i,j,n,count=0;
	cout<<"enter size of array";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]==7){
			count++;
		}
	}
	cout<<"count of 7 is"<<count;
}
