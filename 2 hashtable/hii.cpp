#include<bits/stdc++.h>
using namespace std;
int main(){
int p[5]={0,1,2,5,6},wt[5]={0,2,3,4,5},m=10,n=4,k[5][9],i,w;
for(i=0;i<=n;i++){
	for(w=0;w<=m;w++){
		if(i==0|| w==0)
		k[i][w]=0;
		else if(wt[i]<=w)
		k[i][w]=max(p[i]+k[i-1][w-wt[i]],k[i-1][w]);
		else
		k[i][w]=k[i-1][w];
	}
}
cout<<k[n][w-1]; 
}
