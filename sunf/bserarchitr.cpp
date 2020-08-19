#include<iostream>
using namespace std;
int bsearch(int a[],int n,int key){
	int l=0,h=n;
	while(l<=h){
	int mid=(l+h)/2;
	if(key==a[mid])
	return mid;
	if(key<a[mid])
		h=mid-1;
	else
	l=mid+1;
  }
  return 0;
	
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10},n=9,i;
	int key=10;
	cout<<bsearch(a,n,key);
}
