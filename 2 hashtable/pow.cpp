#include<iostream>
#include<math.h>
using namespace std;
int main(){
int i,x[10],n,j=0,flag=0;
cin>>n;
for(i=0;i<=10;i++){
	x[j]=pow(2,i);
	j++;
}
for(j=0;j<=10;j++){
//cout<<x[j]<<" ";
if(x[j]==n)
flag=1;
}
if(flag==1)
cout<<"yes";
else
cout<<"no";
}
