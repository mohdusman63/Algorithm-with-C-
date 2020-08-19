#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6]={1,2,3,4,5,6},i,j,k,x;
	k=2,i=0,x=k;
	while(i<k){
		swap(a[i],a[k]);
		k--;
		i++;
		}
		if(i==k){
			int y=2;
			int z=x+3;
			while(y<z){
		   swap(a[y+1],a[z]);
		   y++;
		   z--;
		   }
		}
	//	cout<<" i is  "<<i<<" k is  "<<k<<endl;
	for(int i=0;i<=5;i++)
	cout<<a[i]<<endl;
}

