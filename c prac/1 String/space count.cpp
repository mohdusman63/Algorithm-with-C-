#include<stdio.h>
int main(){
	char str[10];
	int i,c=0,space=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		c++;
		if(str[i]==' '){
			space++;
		}
	}
	printf("%d\t%d",c,space);
	
}
