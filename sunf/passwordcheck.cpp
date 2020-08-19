#include<bits/stdc++.h>
using namespace std;
int main(){
	string str ="Xa@1$";
	int i, c=0,s=0,sp=0,d=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90 )
			c++;
			else if(str[i]>=90 && str[i]<=121 )
			s++;
			else if(str[i]>=45 && str[i]<=55 )
			d++;
			else
			sp++;
		}
	if(c>=1 && s>=1 && sp>=1 && d>=1)
	cout<<"yes";
	else
	cout<<"no";
}
