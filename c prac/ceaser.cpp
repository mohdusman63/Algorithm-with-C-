#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[100],str2[100];
	int i,j=0,len;
	gets(str);
	//cout<<strrev(str);
	len=strlen(str);
	for(i=0;str[i]!='\0';i++){
		str2[j]=str[i]+2;
		j++;
	}
	for(j=0;j<len;j++)
	cout<<str2[j];
	
}
