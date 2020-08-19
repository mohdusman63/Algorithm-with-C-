#include<stdio.h>
int main(){
	char str[10],s1[10];
	int i,j,c[26]={0},d[26]={0};
	gets(str);
	gets(s1);
	for(i=0;str[i]!='\0';i++){
		c[str[i]-97]++;
			}
	for(i=0;s1[i]!='\0';i++){
		d[s1[i]-97]++;
			}		
		

	for(i=0;i<7;i++){
		if(c[i]>0)
		printf("%d time %c \t ",c[i],i+97);
	}
	printf("\n");
		for(i=0;i<7;i++){
			if(d[i]>0)
		printf("%d time %c \t ",d[i],i+97);
}
    	for(i=0;i<7;i++)
{
	if(c[i]=d[i]){
		printf("%c",i+97);
	     
	}
}
}
