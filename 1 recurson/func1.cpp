//head recursiom
#include<iostream>
using namespace std;
	void recur(int n){
		if(n>0){
			recur(n-1);
          printf("%d",n);
          
		}
    }
	
	int main(){
       int x=5;
		recur(x);
	}


