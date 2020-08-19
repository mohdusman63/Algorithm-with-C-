#include<iostream>
using namespace std;

binarysear(int a[],int n,int key){
	int l,h,mid;
	l=0,h=n-1;
		while(l<=h){
		mid=(l+h)/2;
		
			if(key==a[mid]){
				return mid;
			}
			else if(key>a[mid]){
				l=mid+1;
			}
			else{ 
			h=mid-1;
			}
		}
		return -1;
	}
	
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	//cout<<n;
	int key;
	cout<<"key is:";
	cin>>key;
 int result=binarysear(a,n,key);
 result==-1?cout<<"not":cout<<result;
	
	
	
	
}
