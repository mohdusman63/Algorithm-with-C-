#include<bits/stdc++.h>
using namespace std;
int main(){

string x="cbadef";
string y="afedcba";
sort(x.begin(),x.end());
sort(y.begin(),y.end());
int l=x.compare(y);
if(l==0)
cout<<"anagram";
else
cout<<"not anagram";
}
