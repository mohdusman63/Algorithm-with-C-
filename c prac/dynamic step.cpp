#include<iostream>
using namespace std;

	int ways(int n){
		if(n==0){
			return 1;
			
		}
		if(n<0){
			return 0;
		}
		
		
		int ans=ways(n-1)+ways(n-2)+ways(n-3);
		return ans;
		
		
	}
	int main(){
		int n=9;
		cout<<ways(n);
	}
	
	

