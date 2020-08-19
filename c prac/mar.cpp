#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short n;
	cin>>n;
	short t;
	cin>>t;
	long long arr[n][n+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t+1;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		arr[i][0]*=arr[i][t];
		for(int j=1;j<t;j++)
		{
			arr[i][j]=arr[i][j]*arr[i][t]+arr[i][j-1];
		}
	}
	int win[n];
	memset(win,0,sizeof(win));
	for(int j=1;j<=t;j+=2)
	{
		int val=arr[0][j];
		for(int i=0;i<n;i++)
		{
			if(arr[i][j]==val)
			{
				win[i]++;
			}
		}
	}
	int fwin=0;
	int val=win[0];
	for(int i=0;i<n;i++)
	{
		if(win[i]>val)
		{
			fwin=i;
			val=win[i];
					}
	}
	cout<<fwin+1<<'\n';
	return 0;
}
