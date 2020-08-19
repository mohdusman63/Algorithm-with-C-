#include<iostream>
using namespace std;
template<class x> 
x big( x a, x b){
	if(a>b)
	return a;
	else
	return b;
}
int main(){
	cout<<big(2,4)<<endl;
	cout<<big(5.5,5.1);
	
}
