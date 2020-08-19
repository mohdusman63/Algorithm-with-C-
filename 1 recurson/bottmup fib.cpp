#include<bits/stdc++.h>
using namespace std;
int F[10];
int fib(int n){
	F[n]=0;
	F[1]=1;
	int i;
	for(i=2;i<=n;i++){
		F[i]=F[i-2]+F[i-1];
	}
	return F[n];
}

int main(){
	cout<<fib(5);
	
}
