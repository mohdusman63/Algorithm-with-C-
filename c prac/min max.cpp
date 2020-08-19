#include<stdio.h>
int main(){
	unsigned long arr[1000];
unsigned long max = arr[0];
unsigned long min = arr[0];
unsigned long total = 0;
//scanf("%d",arr_size);
for (int i = 0; i < 5; i++)
{
    if (arr[i] > max) 
        max = arr[i];
    if (arr[i] < min)
        min = arr[i];
    total+=arr[i];
}
printf("%ul %ul", total - max, total - min);
}
