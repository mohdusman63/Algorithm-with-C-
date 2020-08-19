#include<stdio.h>
int main(){
	char str[10];
	int i,j;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		printf("%d\n",str[i]);
	}
}
