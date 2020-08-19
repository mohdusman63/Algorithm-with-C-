#include<stdio.h>
#include<string.h>
int main(){
	char str[100],b[100],c;
	printf("enter the string");
	gets(str);
	strcpy(b,str);
    strrev(b);
   if (strcmp(str, b) == 0)  // Comparing input string with the reverse string
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");
	
	
	
}
