#include <bits/stdc++.h>
#define forn(i,j,n) for (int i=j; i < int(n); i++)
using namespace std;
typedef long long int ll;


int main() 
 {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n;
  cin >>n;
  ll a[n];
  
  forn (i,0,n)
      cin>>a[i];
    
  sort(a,a+n);
 int extra[2],bottle=1;
 extra[1]=0;
    for (int i=1; i < n; i++)
  {
    if(a[i]==a[i-1])
    {
        if(extra[1])
            {
             if(a[i]>extra[0])
                {
                --extra[1];
                if(extra[1]==0)
                    {
                        extra[0]=a[i];
                        extra[1]++;
                    }
                
                }
                else
                {
                bottle++;
                extra[1]++;  
                }
            }
         else
             {   
                 extra[0]=a[i];
                 extra[1]++;
                 bottle++;
             }
    
    }
  
  }
 
     cout<<bottle<<"\n";
  return 0;
}
