#include<iostream>
using namespace std;

class C{
	private:
		int data;
	public:
		C()
		{
			cout<<"Default constructor is called.";
		}
};
int main()
{
    C c1;
    
}
