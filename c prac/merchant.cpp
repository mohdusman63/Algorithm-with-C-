#include<iostream>
using namespace std;
int main(){
	int r,sum=0,a[100],i,j,temp,n=10,H[100]={0};
	cin>>n;
	 for(i=0;i<n;i++)
	 cin>>a[i];
	
	 for(i=0;i<n;i++){
	 H[a[i]]++;
	 }
	  for(i=0;i<100;i++){
	  if(H[i]>=2){
	  	sum=sum+H[i];
	  	cout<<i<<"  "<<H[i]<<"    "<<sum<<endl;
	  }
	  }
	  //cout<<sum/2;
}
	
