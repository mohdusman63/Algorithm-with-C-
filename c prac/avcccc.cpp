#include<iostream>
using namespace std;
int main(){
	char a[10],b[10],c[10],k=0;
	int i,j;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++){
		for(j=0;b[j]!='\0';j++){
		if(a[i]==b[j]){
			c[k]=b[j];
			k++;
		}
	}
	
}
c[k]='\0';
for(k=0;c[k]!='\0';k++)
cout<<c[k];}
