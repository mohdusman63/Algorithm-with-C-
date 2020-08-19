#include<iostream>
using namespace std;
int main(){
	int n,x,q=0,c,rem,i,t;
	
	cin>>t;
	
	while(t--){
		cin>>x;
		n=x;
		c=0;
	
	while(x!=0){
		rem=x%10;
		if(rem>0){
		
		if(n%rem==0){
			c++;
			}
		}
		   x=x/10;
		
	}
		cout<<c<<endl;	
	}
	//cout<<c;
}
