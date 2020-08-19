#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,a[10],l,k=0,c=0,q=0,d[10];
	string s;
	string s1;
	cin>>s;
	s1=s;
	l=s.length();
	for(i=0;s[i]!='\0';i++){
		a[k++]=int(s[i]);
	}
	cout<<l<<endl;
	for(k=0;k<l;k++){
	cout<<a[k]<<" ";
	cout<<endl;
	d[q]=abs(a[k]-a[k+1]);
	q++;
}
	for(q=0;q<l-1;q++)
	cout<<d[q]<<"  ";
	cout<<s1;
}

