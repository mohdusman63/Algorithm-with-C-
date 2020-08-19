#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int m,int n){
	int i,j;
	int l[m+1][n+1];
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i==0|| j==0)
			l[i][j]=0;
			else if(x[i-1]==y[j-1])
			l[i][j]=l[i-1][j-1]+1;
			else
            l[i][j] = max(l[i - 1][j], l[i][j - 1]);  
		}
	}
	return l[m][n];
	
}


int main(){
string x="BBAYB";
string y="AYZQ";
int m,n;
m=x.length();
n=y.length();
cout<<lcs(x,y,m,n);	
}
