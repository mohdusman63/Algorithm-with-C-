#include<bits/stdc++.h>
using namespace std;
void seieve(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++){
		if(prime[p]==true){
			for(int i=p*p;i<=n;i=i+p){
				prime[i]=false;
			}
		}
	}
	for(int p=2;p<=n;p++)
	{
		if(prime[p]){
			cout<<p;
		}
	}
}
int main(){
	int n=20;
	seieve(n);
}
