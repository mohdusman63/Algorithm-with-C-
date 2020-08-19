#include<iostream>
using namespace std;
int main(){
	int H[200]={0},arr[5]={9,2,3,4},arr1[5]={5,6,7,8,9},i,j;
	
	
	for(i=0;i<=5;i++){
		H[arr[i]]++;
		}
		for(i=0;i<=5;i++){
		H[arr1[i]]++;
	}
	for(i=1;i<=10;i++){
		if(H[i]>=2){
		cout<<i<<" ";
	}
}
}
