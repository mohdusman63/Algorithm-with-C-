#include<bits/stdc++.h>
using namespace std;
int main(){
int x=10,c=0;
while(x){
	x=x&(x-1);
	cout<<x;
	c++;
} 

cout<<c;
}

