#include<stdio.h>
#include<string.h>
int main(){
	char str[5][10]={"usman","belal"},str1[20];
	int i,flag=0;
	gets(str1);
	for(i=0;i<20;i++){
		if(strcmp(str1,str[i])==0)
		flag=1;
	}
	if(flag==1)
	puts("matched");
	else
	puts("not");
	
	
}
