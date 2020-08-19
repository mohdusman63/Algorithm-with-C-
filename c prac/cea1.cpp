#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[26],st[26],c;
	int i,len,j=0;
	//cin>>len
	gets(str);
	//cin>>k;
	//len=strlen(str);
	for(i=0;str[i]!='\0';i++){
	     if(str[i]=='z' || str[i]=='y' || str[i]=='x' ){
	     	st[j]=str[i]-24;
	     	j++;
		 }
		 else if(str[i]>=65 &&  str[i]<=85){
		 	st[j]=str[i]+2;
		 	j++;
		 }
		 else if(str[i]>=90 && str[i]<=119){
		 		st[j]=str[i]+2;
		 	j++;
		 }
		 else {
		 	st[j]=str[i];
		    j++;
		 }
		 
	    
}
st[j]='\0';
		for(j=0;st[j]!=0;j++)
	cout<<st[j];	 
		 }
	    
	

