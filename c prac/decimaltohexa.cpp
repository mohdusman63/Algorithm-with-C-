#include<stdio.h>
#include<string.h>
int main(){
	int rem,n,i=0,c=0;
	char a[32];
	scanf("%d",&n);
	while(n>0){
	rem=n%16;
	if(rem>9)
	a[i]=char(rem+55);
	else
	a[i]=char(rem+48);
	n=n/16;
	i++;
	}
	a[i]='\0';
	strrev(a);
	printf("%s",a);
}
	

