#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,h[26]={0};
	string y="babcbaaxxxzzzzyqw";
	for(i=0;y[i]!='\0';i++)
	 h[y[i]-97]++;
	 for(i=0;i<y.length();i++){
	 	if(h[y[i]-97]>0){
	 		cout<<y[i]<<"  "<<h[y[i]-97]<<endl ;
	 		h[y[i]-97]=0;
	 		
		 }
	 }
	 
}
