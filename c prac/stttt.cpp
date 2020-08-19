#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	int i;
	gets(s);
   for(i=0;s[i]!='\0';i++){
   	if(s[i]==' ')
	   printf("\n");
   	printf("%c",s[i]);
   
}}
