#include<stdio.h>
#include<string.h>
int main(){
	char A[ ]="manus";
    char B[ ]="usman";
	int i,flag=0, H[26]={0},K[26]={0};
	for(i=0;A[i]!='\0';i++){
		H[A[i]-97]++;
		}
		for(i=0;B[i]!='\0';i++){
		K[B[i]-97]++;
}
for(i=0;i<26;i++){
	if(H[i]!=K[i]){
		flag=1;
	}
	

}
if(flag==0)
{
	printf("anag");
}
else{
	printf("not anagram");
}
}
	
		
				


