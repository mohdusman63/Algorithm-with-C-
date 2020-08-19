#include<iostream>
using namespace std;
int main(){
	int x=28,i,j,sum=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	if(sum==x)
	cout<<"yes";
	
}
