#include<stdio.h>
int main(){
	char str[10];
	int i,c=0,vow=0;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i' ||str[i]=='o'|| str[i]=='u'){
		
	//	printf(" %c",str[i]);
		c++;
		
}
	else

	vow++;}
	
	
	printf("vowel is =%d\t and consonent is = %d",c,vow);
	
}
