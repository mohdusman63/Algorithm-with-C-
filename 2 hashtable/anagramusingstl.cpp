#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
	string s="decimal";
    string s2="medical";
    sort(s.begin(),s.end());
    //cout<<s<<endl;
     sort(s2.begin(),s2.end());
    //cout<<s2<<endl;
    y=s.compare(s2); 
    if(y==0)
    cout<<"anagram";
    else
    cout<<"not a anagaram";
}
