#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,a[10]={5,4,3,2,1},n=5;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(j=0;j<n;j++)
	cout<<a[j];
	
}
