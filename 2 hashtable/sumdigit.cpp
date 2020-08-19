#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,c,rem,sum=0, n;
	cin>>n;
	x=n;
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
