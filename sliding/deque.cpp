#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>q;
	q.push_back(10);
	q.push_back(11);
	q.push_front(5);
    deque <int> :: iterator it; 
    for (it = q.begin(); it != q.end(); ++it) 
        cout << *it<<"  ";
        cout<<"\n";
        q.pop_back();
        q.pop_front();
          for (it = q.begin(); it != q.end(); ++it) 
        cout << *it<<"  ";
}
