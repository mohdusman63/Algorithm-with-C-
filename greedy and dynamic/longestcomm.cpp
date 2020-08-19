#include<bits/stdc++.h>
using namespace std;
void lcs(char * x,char*  y,int m,int n){
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
	int index=l[m][n];
	char lcs[index+1];
	lcs[index]='\0';
	 i=m,j=n;
	while(i>0 && j>0){
		if(x[i-1]==y[j-1]){
			lcs[index-1]=x[i-1];
			i--;j--;index--;
		}
		else if(l[i-1][j]>l[i][j-1])
		i--;
		else
		j--;
	}
	cout<<x<<"  "<<y<<"  longest common sequence of string is  "<<lcs;
}


int main(){
char x[]="BBAYB";
char y[]="GXTXAYB";
int m,n;
m=strlen(x);
n=strlen(y);
lcs(x,y,m,n);	
}
