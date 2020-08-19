#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str1[100],st[100];
	int i,j,k=0,l;
	gets(str);
	gets(str1);
	for(i=0;str[i]!='\0';i++){
		for(j=0;str[j]!='\0';j++){
			if(str[i]==str1[j]){
				st[k]=str1[j];
				k++;
				
			}
		}
	}
	l=strlen(st);
	
	for(i=1;i<l;i++){
		printf("%c",st[i]);
	}
	
}
