#include<bits/stdc++.h>
using namespace std;
int main(){
    int H[26]={0},i,j,c=0,t;
    string s1;
    cin>>s1;
    for(i=0;i<s1.length();i++){
        if(s1[i]==s1[i+1]){
        
        s1.erase(i,2);
        i--;
       
}
        }
    //    cout<<c;
    t=s1.length();
    if(t==0)
    cout<<"Empty String";
    else
    cout<<s1<<endl;

}
    
    
        

