#include<bits/stdc++.h>
using namespace std;
 bool isprime(int n){
 	if(n<=1)
 	return false;
 	for(int i=2;i<n;i++)
 	if(n%i==0)
 	return false;
 	return true;
 }
void input(string s){
	int n= s.length();
	for(int i=2;i<=n;i++)
	if(isprime(i))
	cout<<s[i-1];
		
	}


int main(){
	string s="geeksforgeeks";
	input(s);
}
