#include<iostream>
using namespace std;
int main(){
	int x,r,z,sum,y;
	for(x=1;x<=1000;x++){
		y=x;
		sum=0;
	while(y>0){
		r=y%10;
		z=r*r*r;
		sum=sum+z;
		y=y/10;
		}
		if(x==sum)
		cout<<sum<<" ";
      }
      return 0;
}
