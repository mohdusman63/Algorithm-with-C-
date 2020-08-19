#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="madam mm madam";
	string y;
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	cout<<s<<endl;
	y=s;
	reverse(s.begin(),s.end());
	cout<<s;
	int z=s.compare(y);
	cout<<z; 
	
}
