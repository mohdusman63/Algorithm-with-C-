#include<stdio.h>
int main(){
	char name[20]={'w','e','l','c','o','m','e','\0'};
	int i;
	for(i=0;name[i]!='\0';i++){ 
		printf("%c",name[i]);
	}
	
}
#include<stdio.h>
int main(){
	char name[20]={'w','e','l','c','o','m','e','\0'};
	int i;
	for(i=0;i<=8;i++){ 
	
	if(i%2==0)
		printf("%c",name[i]);
	}
	
}
