#include <stdio.h>
#include <string.h>



int main() {
    int a,c;
    double d ,e;
    char s[15] = "HackerRank ",str[255];
    
  gets(str);
  scanf("%d",&a);
   scanf("%lf",&d);
   
   
  c=a+d;
  e=d+d;
       //strcat(s,str);
printf("%d\n",c);
printf("%lf\n",e);
puts(strcat(s,str));

    return 0;}
