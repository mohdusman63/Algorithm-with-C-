#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[150],b[150]; 
	 
	 int i,j=0,H[26]={0},flag=0;
	//getline(cin,a);
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=46 && a[i]<=90){
			a[i]=a[i]+32;
	}
		if(a[i]!=' '){
			b[j++]=a[i];
			}
		
}
	b[j]='\0';
	for(j=0;b[j]!='\0';j++){
//	  cout<<b[j]<<endl;
	  H[b[j]-97]++;	 
}
for(i=0;i<=25;i++){
	//cout<<H[i];
	if(H[i]==0){
		flag=1;}
		
//	cout<<H[i];
	
}
if(flag==1)
cout<<"not panagram";
else
cout<<"panagram";
}

