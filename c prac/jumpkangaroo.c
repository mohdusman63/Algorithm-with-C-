    #include<stdio.h>
    #include<stdlib.h>
    int main(){
    	int x1,x2,v1,v2,k1,k2,i;
    	printf("enter input value");
    	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
	
	
	
 k1 = x1;
     k2 = x2;
    if(x2>x1&&v2>v1){
        printf("NO");
    }
    else{
        for( i=0;i<10000;i++){
            k1+=v1;
            k2+=v2;
            if(k1==k2){
                printf("YES");
               exit(0);
            }
        }
      printf("NO");
    
	}}
