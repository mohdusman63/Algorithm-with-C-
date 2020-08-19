#include<iostream>
using namespace std;
void fact(int x){
	if(x<0){
		printf("%d   ",x) ;
		x=x+5;
		printf("%d   ",x);
	//
	}
	else {
	  
     printf("%d\t",x);
      fact(x-5);
}}
int main(){
	int a;
	cin>>a;
  fact(a);
  //cout<<s<<endl;	
}
