#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,m,n;
	string text,patt;
	cout<<"enter the text ";
	cin>>text;
	cout<<"enter the pattern";
	cin>>patt;
	m=text.length();
	n=patt.length();
	for(i=0;i<=m-n;i++){
		for(j=0;j<n;j++){
			if(patt[j]!=text[i+j])
			 break;
		}
		if(j==n)
		cout<<"pattern is found at index of "<<i<<" ";
	}
}
