#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	unsigned long long int i,k,x,sum,rem,j;
	cin>>s;
	cin>>k;
	s1=s;
	for(i=1;i<k;i++)
	s1=s1+s;
//	 j=stoi(s1);
//	cout<<j;
	
		x=j;
	while(x>9){
	  sum=0;
	while(x!=0){
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	x=sum;
	
}
cout<<sum;
}
	

