//head recursiom
#include<iostream>
using namespace std;
	int recur(int n){
		if(n>0)
        return n+recur(n-1);
    }
          
	int main(){
       int x;
       cout<<"enter x for finding sum upto natural no ";
       cin>>x;
	cout<<	recur(x);
	}


