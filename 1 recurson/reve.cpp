#include<bits/stdc++.h>
using namespace std;
void recur(int n){
	if(n>0){
		int rev=0;
		rev=rev*10+n%10;
		cout<<rev;
		recur(n/10);
	}
}
int main(){
	int n=1211;
	recur(n);
}
