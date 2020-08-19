//head recursiom
#include<iostream>
using namespace std;
	int recur(int n){
		if(n==0)
        return 1;
        else
        return n*recur(n-1);
    }
          
		
    
	
	int main(){
       int x=4;
	cout<<	recur(x);
	}


