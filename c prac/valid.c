#include<stdio.h>
int main(){
	char str[20],i,j,flag=0;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(!((str[i]>=65 && str[i]<=97)||(str[i]>=97 &&str[i]<=122))){
			flag=1;
			break;
		
			
		}
	
		}
		if(flag==0)
		printf("valid");
		else
		printf("invalid");
	
		}
	

