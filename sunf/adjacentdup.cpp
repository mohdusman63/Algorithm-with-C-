#include<bits/stdc++.h>
using namespace std;
int main(){
	string x="aaabaaaba";
	int i,j;
	for(i=0;x[i]!='\0';i++){
		if(x[i]==x[i+1]){
			for(j=i;x[j]!='\0';j++)
			x[j]=x[j+1];
			cout<<i;
		}
	}
	cout<<x;
}
