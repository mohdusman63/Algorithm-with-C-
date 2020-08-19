#include<stdio.h>
#include<string.h>
int main(){
	int i,r,round;
	char str[5][20], s[20];
	printf("enter fife string ");
	for(i=0;i<=4;i++)
	gets(str[i]);
    for(round=1;round<=4;round++){
    	for(i=0;i<=3;i++){
      r=strcmp(str[i],str[i+1]);
    	if(r>0){
		strcpy(s,str[i]);
		strcpy(str[i],str[i+1]);
		strcpy(str[i+1],s);
	}
    		
		}
	}
puts("dictionary order is");
for(i=0;i<=4;i++){
	puts(str[i]);
}
}
	
