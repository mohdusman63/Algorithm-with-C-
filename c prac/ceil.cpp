#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr[10],y,i,j,n,temp;
float c,x;
//cout<<"enter the length of array";
cin>>n;
x=n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1;j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		for(j=0;j<n;j++)
   cout<<arr[j];
   c= ceil(x/2);
   y=c;
  cout<<"   "<<y   ;
   cout<<arr[y-1];

}
