#include<stdio.h>
#include<string.h>
int main(){
	int r;
	char str[20],str2[20],s[5];
	printf("enter two string ");
	gets(str);
	gets(str2);
	r=strcmp(str,str2);
	if(r>0){
		strcpy(s,str);
		strcpy(str,str2);
		strcpy(str2,s);
	}
	puts("sortd order is");
	puts(str);
	puts(str2);
}
	
