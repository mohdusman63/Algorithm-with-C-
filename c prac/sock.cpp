#include<iostream>
using namespace std;
int main(){
	int r,a[10]={10,20,20,10,10,30,50,10,20},i,j,temp,n=10,H[30]={0};
	 for(i=0;i<9;i++){
	 H[a[i]]++;
	 }
	  for(i=0;i<9;i++){
	  if(H[i]>0){
	  	cout<<i<<"  "<<H[i];
	  }
	  }
}
	
