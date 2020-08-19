#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=13;
	int c=0;
	while(x>0){
		c=c+(x&1);
		x=x>>1;
	}
	cout<<c;
}
