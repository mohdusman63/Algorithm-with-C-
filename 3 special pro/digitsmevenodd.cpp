#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=12,c=1,rem,l,esum=0,eodd=0,a[100000],i=1,z;
	cout<<"enter digit";
	cin>>x;
	z=x;
	string y;
	y=to_string(x);
	l=y.length();
	cout<<l<<endl;
	while(x>0){
		rem=x%10;
		a[i++]=rem;
		c++;
	     x=x/10;	
    }
	for(i=1;i<c;i++)
    {
	  if(i%2==0)
	  	esum=esum+a[i];
	  else
	  	eodd=eodd+a[i];
	}
	if(l%2!=0)
	cout<<" "<<"esum is  "<<esum<<"  "<<"eodd is  "<<eodd;
	else{
	 swap(esum,eodd);
	 cout<<" "<<"esum is  "<<esum<<"  "<<"eodd is  "<<eodd;
       }
}
