#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int l,u,x,i,sum=0;
	cin>>l;
	cin>>u;
	for(x=l+1;x<=u-1;x++){
		for(i=2;i<x;i++){
			if(x%i==0)
			break;
			cout<<i<<endl;
		}
		if(i==x){
		sum=sum+x;
		cout<<" prime no is "<<x<<endl;}
		
	}
	cout<<"sum is"<<sum;
}
