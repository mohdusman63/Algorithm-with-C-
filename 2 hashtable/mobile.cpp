#include<iostream>
using namespace std;
int main(){
	string s,p;
	int i,j=0;
	cin>>s;
	for(i=0;s[i]!='\0';i++)
   {
   if(s[i]=='0')
   	p[j++]='9'; 
   else if(s[i]=='1')
   p[j++]='8';
	else if(s[i]=='2')
   p[j++]='7';
     else if(s[i]=='3')
   p[j++]='6';
     else if(s[i]=='4')
   p[j++]='5';
     else if(s[i]=='5')
   p[j++]='4';
     else if(s[i]=='6')
   p[j++]='3';
     else if(s[i]=='7')
   p[j++]='2';
     else if(s[i]=='8')
   p[j++]='1';
}
  p[j]='\0';
  for(j=0;p[j]!='\0';j++)
  cout<<p[j];


}
