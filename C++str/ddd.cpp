#include<bits/stdc++.h>
using namespace std;
int main(){
	int H[26]={0},num,i,c,j,l;
	for(num=2;num<=100;num++){
		c=0;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				c++;
				break;
			}
		}
		if(c==0)
		cout<<num<<" ";
	}
	
}
