#include <stdio.h>
#include <string.h>

int main(){                           
	char s[]="AAAB";

	int i,j,k;
	for(i=0;s[i];i++){
		if(s[i]==s[i+1]){
			for(j=i;s[j];j++)
				s[j]=s[j+1];
				i--;
			
		}
}
puts(s);
	}
	
