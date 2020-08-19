#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int>v= { 10,20} ;
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	//cout<<v.capacity()<<endl;
//	v.pop_back();
	//	cout<<v.front();
	//	cout<<v.back();
//	v.clear();

	//cout<<v.size()<<endl;
	
	vector <int> :: iterator it =v.begin();
	v.insert(it+2,11);   //
	v.erase(it+1);
		for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
		cout<<v.erase(it+1);
	
	
	
}
