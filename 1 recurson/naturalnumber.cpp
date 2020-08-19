//head recursiom
#include<iostream>
using namespace std;
	void recur(int n){
		int sum=0;
		if(n>0){
		recur(n-1);
		sum=sum+n;
		printf("%d\t",n);
		//printf("%d",sum);
    }
}
          
		
    
	
	int main(){
       int x=5;
		recur(x);
	}


