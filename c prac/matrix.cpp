#include<iostream>
using namespace std;
int main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	      b[j][i]=a[i][j];
	
		
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"   "<<b[i][j];
			
		}
		cout<<endl;
	
	
}}
