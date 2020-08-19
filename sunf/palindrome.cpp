#include<iostream>
using namespace std;
int main(){
	int x=111111,rem,sum=0,y;
	y=x;
	while(x>0){
		rem=x%10;
		sum=sum*10+rem;
		x=x/10;
		
	}
	if(y==sum)
	cout<<"palindrome";
	else
	cout<<"not";
}
