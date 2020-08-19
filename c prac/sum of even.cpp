#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[50];
unsigned long long int l,rem,i=0,n,c[50],sum=0,osum=0,oosum=0,ooosum=0;
	gets(str);
	l=strlen(str);
	printf("%d\n",l);
	n=atoi(str);

	if(l%2==0){
		while(n!=0){
		rem=n%10;
		c[i]=rem;
		i++;
		n=n/10;
	}
	for(i=0;i<l;i++){
	
	if(i%2==0){
		sum=sum+c[i];
	}
	else{
		osum=osum+c[i];
			}
     }
        cout<<"even sum "<<sum<<"   odd sum"<<osum;
} 
else{
		while(n!=0){
		rem=n%10;
		c[i]=rem;
		i++;
		n=n/10;
	}
	for(i=0;i<l;i++){
	
	if(i%2==0){
		oosum=oosum+c[i];
	}
	else{
		ooosum=ooosum+c[i];
	
	}
	}
	swap(oosum,ooosum);
	cout<<"evensum  "<<oosum<<"   odd sum  " <<ooosum;
}


}
