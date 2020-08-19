#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10},i,n=10,k=3;
		
	for(i=1;i<pow(2,n);i++){
		vector<int>v;
		int x=i;
		while(x>0){
	    int rem=x%2;
		v.push_back(rem);
		x=x/2;
	     }
    	int p=n-(int)v.size();
    	
	    for(int j=1;j<=p;j++)
	    v.push_back(0);
	    reverse(v.begin(),v.end());
	    int c=0;
	    for(int k=0;k<v.size();k++){
	        if(v[k]==1){
	        	c++;
			}
		}
		if(c==k){
			for(int k=0;k<v.size();k++){
				if(v[k]==1){
					cout<<a[k]<<"  ";
				}
			
		}
		cout<<endl;
			
         }
     }
 }
