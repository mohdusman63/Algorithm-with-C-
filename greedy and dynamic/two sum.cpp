#include<bits/stdc++.h>
using namespace std;
void twosum(int a[],int n,int x){
	int i=0,j=n-1;
	while(i<j){
		if(a[i]+a[j]<x)
		i++;
		else if(a[i]+a[j]>x)
		j--;
		else{
		cout<<a[i]<<"  "<<a[j];
		break;}
		
	}
}

int main(){
	int a[]={2,4,-1,3,-4,0,3};
	int c=sizeof(a)/sizeof(a[0]);
	sort(a,a+c);
	int x=4;
     twosum(a,c,x);
}
