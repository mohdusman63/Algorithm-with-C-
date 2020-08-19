#include<stdio.h>
#include<string.h>
int main(){
	int i,l,flag=0;
	char st[20];
	char str[32][10]={"usman","belal","abc","cde"};
	
	gets(st);
	
	for(i=0;i<5;i++)
	if(strcmp(st,str[i])==0){
		flag=1;
		
	}
   if(flag==1){
   	printf("matched");
   }
   else{
   	printf("not matched");
   }
}
