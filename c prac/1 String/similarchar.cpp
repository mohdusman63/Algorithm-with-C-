#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() 
 {
  
  int n;
  cin>>n;
  int alpha[26]={0};
  int a[n];
  string s;
  cin>>s;
  for (int i=0; i < n; i++)
  {
      a[i]=alpha[s[i]-97]++;
      printf("%c",a[i]);
  }
  int q,que;
  cin >>q;
  while(q--)
  {
      cin>>que;
      cout<<a[que-1]<<"\n"<<flush;
  }
  
  return 0;
}

