#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,5,10,20,50,100,500,1000,2000},i,c,n=10;
    	vector<int >v;
	cout<<"enter curency";
	cin>>c;
	for(i=n-1;i>=0;i--){
		while(c>=a[i]){
			c=c-a[i];
			v.push_back(a[i]);
		}
	}
	    for (i =0; i< v.size(); i++) 
        cout << v[i] << "  "; 
} 

