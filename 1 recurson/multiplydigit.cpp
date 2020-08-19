//head recursiom
#include<iostream>
using namespace std;
	int recur(int n){
		if(n==0)
        return 1;
        else
        return n%10*recur(n/10);
    }
        int main()
	{
    int x=5432;
	cout<<	recur(x);
	}


