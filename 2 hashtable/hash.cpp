#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, H[26]={0},k=0,i,j=0,c[10];
	string s;
	cin>>s;
	l=s.length();
	for(i=0;i<l;i++){
		H[s[i]-97]++;
	}
	for(i=0;i<l;i++){
		if(H[s[i]-97]>0){
			c[j++]=H[s[i]-97];
				k++;
			cout<<H[s[i]-97]<<endl;
			//H[s[i]-97]=0;
		}
	}
	for(j=0;j<=k;j++)
	if(H[j]>0){
	cout<<"  "<<H[j];
}
}
