#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
	string s="dcba";
    string s2="abcd";
    sort(s.begin(),s.end());
    cout<<s<<endl;
     sort(s2.begin(),s2.end());
    cout<<s2<<endl;
    y=s.compare(s2); 
    if(y==0)
    cout<<"anagram";
    else
    cout<<"not a anagaram";
}
