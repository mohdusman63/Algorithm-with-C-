#include<bits/stdc++.h>
using namespace std;
  int sum(int n){
  	int result=0;
	if(n==1)
     cout<<n;
	else{
	 result=n+sum(n-1);
    }
    return result;
	
	
}

int main(){
	
	sum(10);
}
