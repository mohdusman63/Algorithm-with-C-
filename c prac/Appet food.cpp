#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,x,sum=0,c=0,b,z=0;
//	cout<<"enter the total amount:";
	cin>>n;
	//	cout<<"enter amount which will be skipped";
	cin>>x;
	for(i=0;i<n;i++)
	cin>>arr[i];
//	cout<<"enter amount which will be skipped";

//	cout<<"enter b value";
	cin>>b;
	for(i=0;i<n;i++){
	
	if(i==x)
	continue;
	//cout<<arr[i]<<"\n";
	sum=sum+arr[i];
	c=sum/2;
	}
	if(c==b){
	cout<<"Bon Appetit " ;
	}
	//else if(b>c){
		
   	//z=b-c;
		
	//}
	//cout<<sum<<"\n";
	//cout<<c;
	cout<<z;
	
}
