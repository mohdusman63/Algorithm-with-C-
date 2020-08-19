#include<stdio.h>
#include<string.h>
int main(){
int num,j,c;

for(num=2;num<=100;num++){

	c=0;
	for(j=2;j<=num/2;j++)
      {
      	if(num%j==0){
      		c++;
      		break;
		  }
	  }


	  if(c==0){
	  	printf("%d\t",num);
	  }
}


}
