#include<stdio.h>
#include<string.h>
int main(){
	int i,H[26]={0};
	char str[10];
	gets(str);
	for(i=0;str[i]!='\0';i++){
		H[str[i]-97]++;
		
	}
	for(i=0;i<26;i++){
	if(H[i]>0){
		printf("%c",i+97);
	}
}
}
