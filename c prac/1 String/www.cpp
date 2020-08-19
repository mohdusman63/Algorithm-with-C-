#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],i,j,k=0,b[10];
	for(i=0;i<6;i++)
	cin>>a[i];
		for(i=0;i<6;i++){
			if(abs(a[i]-a[i+1])==1){
				cout<<a[i]<<"  "<<a[i+1]<<endl;
				
			}
		}
		//	for(k=0;k<6;k++)
		//	cout<<b[k];
	
}
