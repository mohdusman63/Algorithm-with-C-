#include<bits/stdc++.h>
using namespace std;
  int main(){
  	int i=0,j=5,a[5]={1,2,3,4,5};
  	
  	while(i<j){
  		swap(a[i],a[j]);
  		i++;
  		j--;
  		
	  }
	  for(i=1;i<=5;i++)
	  cout<<a[i]<<endl;
  }
