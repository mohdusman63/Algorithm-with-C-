#include<bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n,int k){
		int max_sum=0;
	   for(int i=0;i<k;i++)
	   max_sum+=a[i];
	     int window_sum = max_sum;
	   for(int i=k;i<n;i++){
	   	window_sum+=a[i]-a[i-k];
	   	max_sum=max(window_sum,max_sum);
	   }
	   return max_sum;
	
}
int main(){
	int a[]={100,200,300,400};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	cout<<maxsum(a,n,k);
}
