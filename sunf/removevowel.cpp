#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[20]="abcdefgh", str[20];
	int i,j=0;
	for(i=0;s[i]!='\0';i++){
		if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u') ){
			str[j++]=s[i];
		}
	
	}
		str[j]='\0';
		for(j=0;str[j]!='\0';j++)
		cout<<str[j];
}
