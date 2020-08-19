#include<bits/stdc++.h>
using namespace std;
struct s{
  int arr[100000];
  int c=0;
};
int main()
{
    long int i,j,n,t,x,max=0,k;
  
  cin>>n;
  
  struct s pl[n];
  
  cin>>t;
  for(i=0;i<n;i++){
  
  for(j=0;j<=t;j++)
      cin>>pl[i].arr[j];
  
  }

  
  for(i=0;i<n;i++)
  {
       for(j=1;j<=t-1;j++)
           pl[i].arr[j]=pl[i].arr[j]+pl[i].arr[j-1];
  
  }
  
   for(i=1;i<t;i=i+2)
   {
       for(j=0;j<n;j++) 
       {
         pl[j].arr[i]=pl[j].arr[i]*pl[j].arr[t];
         
       }
   
   }
  for(i=1;i<t;i=i+2)
  { 
    for(j=0;j<n;j++)
    {
    
         x=pl[j].arr[i];
           if(x>max)
           { max=x;
              k=j;
           }
    
    }
         (pl[k].c)++;
    
  }
  max=0;
  for(i=0;i<n;i++)
  {
    if(pl[i].c>max)
        max=pl[i].c;
    
  }
  cout<<max<<endl;
}
