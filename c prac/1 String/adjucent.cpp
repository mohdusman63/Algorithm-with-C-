#include<iostream>
using namespace std;
int main(){
	string s;
	int i,j,t,c=0;
	cin>>t;
	while(t--){
	
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1]){
			for(j=i;s[j]!='\0';j++)
				s[j]=s[j+1];
				i--;
				c++;
			}
		}
	cout<<c<<endl;
//	cout<<s;
}
}

