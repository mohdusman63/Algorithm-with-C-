#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int i,j;
	cin>>s;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==s[i+1]){
			for(j=i;s[j]!='\0';j++)
			s[j]=s[j+1];
			i--;
		}
	}
	cout<<s;
    
}
 




