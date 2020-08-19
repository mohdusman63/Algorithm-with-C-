#include<bits/stdc++.h>
using namespace std;
int fib(int n,int *dp){
	if(n<=1){
	 dp[n]=n;
	 return n;
	 }
	 if(dp[n]!=-1)
	 return dp[n];
	 else{
	 	dp[n]=fib(n-1,dp)+fib(n-2,dp);
	 	return dp[n];
	 }
}
int main(){
	int dp[100];
	for(int i=0;i<100;i++)
	dp[i]=-1;
	cout<<fib(5,dp);
}
