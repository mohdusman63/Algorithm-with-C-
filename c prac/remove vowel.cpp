#include<stdio.h>
#include<string.h>
int main(){
	char str[20],st[20],c;
	int i,len,j=0;
	gets(str);
	len=strlen(str);
		for(i=0;str[i]!='\0';i++){
	     if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )){
	     	st[j]=str[i];
	     	j++;
	     	
		 }
	}
		 for(j=0;j<len;j++)
	printf("%c",st[j]);	 
		 
	}
