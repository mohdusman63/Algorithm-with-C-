#include<bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n,int k){
	int max_sum=INT_MIN;
	for(int i=0;i<n;i++){
		 int current_sum = 0; 
		for(int j=0;j<k;j++){
		  current_sum +=a[i+j];
		}
		max_sum=max( current_sum,max_sum);
	}
	return max_sum;
}

int main(){
	int a[]={ 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int n=sizeof(a)/sizeof(a[0]);
	int k=4;
	cout<<maxsum(a,n,k);
}
