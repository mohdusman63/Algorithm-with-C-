#include<iostream>
using namespace std;
int main(){
	int ans=0,sum=0,arr[]={4,-2,-3,4,-1,-2,1,5,-3},i;
     for(i=0;i<9;i++){
     	sum=sum+arr[i];
     	if(sum>ans)
     	ans=sum;
     	if(sum<0)
     	sum=0;
	 }
	 cout<<ans;
}
