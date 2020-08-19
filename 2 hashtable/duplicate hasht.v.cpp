#include<stdio.h>
int main(){
	char str[10];
	int i,H[26]={0};
	gets(str);
	for(i=0;str[i]!='\0';i++){
		H[str[i]-97]++;
	}
	for(i=0;i<26;i++){
		if(H[i]>1){
		
		printf("%d",H[i]);
		printf("%c",i+97);
	}
	}
}
