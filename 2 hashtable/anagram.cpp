#include<stdio.h>
#include<string.h>
int main(){
	char A[10]="decimal";
  char B[10]="medical ";
	int i, H[26]={0};
	for(i=0;A[i]!='\0';i++){
		H[A[i]-97]++;
		}
	
	for(i=0;B[i]!='\0';i++){
		H[A[i]-97]--;
		if(H[A[i]-97]<0){
			printf("n0");
			break;
			}
	}
	
	if(B[i]=='\0'){
		printf("yes");

}}
