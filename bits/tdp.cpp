//bottom up approach 
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	int F[n+1];
	int i;
	F[0]=0,F[1]=1;
	for(i=2;i<=n;i++){
		F[i]=F[i-2]+F[i-1];
	}
	return F[n];
	
}

int main(){
	int n=5;
	cout<<fib(n);
       }
