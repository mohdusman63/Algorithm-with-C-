#include<iostream>
using namespace std;
class balance{
	private :
		int x;
		static float roi;
	
     public:
     	void setdata(){  
		  cout<<roi;                        //if not define here we define outside the class

	}
};
float balance::roi=3.3f;
int main(){
	balance c;
	c.setdata();
}
