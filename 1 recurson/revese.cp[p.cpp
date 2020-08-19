//head recursiom
#include<iostream>
using namespace std;
	int recur(int n){
		if(n>0)

        return n%10+recur(n/10);
    }
          
		
    
	
	int main(){
       int x=1234;
	cout<<	recur(x);
	}

  
