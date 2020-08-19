#include<bits/stdc++.h>
using namespace std;
bool twosum(int a[],int x,int i){
	int j=6;
	while(i<j){
		if(a[i]+a[j]<x)
		i++;
		else if(a[i]+a[j]>x)
		j--;
		else{
	return true;
	}
		
	}
	return false;
}
bool tripletsum(int a[],int c)
{
	for(int i=0;i<c-2;i++){
	
	if(twosum(a,-a[i],i+1)){
	
	return true;
}
}
}
int main(){
	int a[]={2,4,-1,3,-4,0,3};
	int c=sizeof(a)/sizeof(a[0]);
	sort(a,a+c);
	int x=4;
     tripletsum(a,c);
}
