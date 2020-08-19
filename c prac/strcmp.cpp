#include<stdio.h>
#include<string.h>
int main(){
	char A[ ]="manus";
    char B[ ]="manua";
    int r;
    r=strcmp(A,B);    //A>B return 1 A<B return -1 A==B return 0
    printf("%d",r);
	}
