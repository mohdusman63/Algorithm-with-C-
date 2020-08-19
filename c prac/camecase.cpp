#include<stdio.h>
int main(){
	char str[10];
	int i,c=1;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>=65 && str[i]<=90){
			c++;
		}
	}
	printf("%d",c);
	}
