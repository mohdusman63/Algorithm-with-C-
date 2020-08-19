#include<iostream>
using namespace std;
template<class x>
 x sum (x a[],int  n){
 	x c=0;
 	for(int i=0;i<n;i++)
 	{
 		c=c+a[i];
	 }
	 return c;
	 
	 
 }
 int main(){
 	int a[5]={1,2,3,4,5};
 	float y[5]={1.2,2.2,3.3,4.4,5.4};
 	double z[5]={1.02,2.02,3.09,4.09,7.98};
 	
 	cout<<sum( a,5);
 	cout<<endl;
 	cout<<sum(y,5);
 	cout<<endl;
 	cout<<sum(z,5);
 }
