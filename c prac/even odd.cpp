
#include<stdio.h>
int main(){
	char str[20],c[20];
	int i,k=0;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(i%2==0){
			c[k++]=str[i+1];
			
		}
	}
	for(k=0;k<5;k++){
		printf("%c",c[k]);
	}
}
