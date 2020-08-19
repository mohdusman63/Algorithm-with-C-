#include<bits/stdc++.h>
using namespace std;
int main(){
	int H[100]={0},a[10],i,n;
	for(i=0;i<6;i++)
	cin>>a[i];
    for(i=0;i<6;i++)
    H[a[i]]++;
    n=3;
	for(i=0;i<10;i++)
    {
    	if(H[i]>=n){
    	cout<<i<<" "<<H[i]<<endl;
    
    } 
		}	
	
}
