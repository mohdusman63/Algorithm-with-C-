#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	int r;
	s1="hellow";
	string s2=" student";
	string s3=s1+s2;
	//cout<<s3;
	r=strcmp(s1,s2);
	cout<<r;
}
