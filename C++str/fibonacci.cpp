#include<bits/stdc++.h>
using namespace std;
int main(){
int i,a=-1,k=0,b=1,c,n,d[100];
cin>>n;
for(i=0;i<n;i++){
	c=a+b;
	d[k]=c;
	k++;
	a=b;
	b=c;
	cout<<c<<"   ";
}
cout<<d[5];

}


