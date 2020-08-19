#include<stdio.h>
#include<string.h>
int main(){
	int H[26]={0},i,j;
	char a[20];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	H[a[i]-97]++;
	for(i=0;i<26;i++)
	{
		if(H[i]>0){
			printf("%d  ",H[i]);
		}
	}
	
	
}
