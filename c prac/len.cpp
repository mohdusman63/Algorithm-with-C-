#include<stdio.h>
int main(){
	char str1[10];
	int i;
	gets(str1);
	for(i=0;str1[i]!='\0';i++){
      if(str1[i]=='u')
      break;

} 
if(str1[i]=='\0')
printf("%d",i);
}
