#include<iostream>
using namespace std;

class C{
	private:
		int data;
	public:
		C()
		{
			cout<<"Default constructor is called."<<endl;
		}
		
		C(int value)
		{
			data=value;
			cout<<"Parameterised constructor is called."<<endl;
		}
		
		void display()
		{
			cout<<"value given is "<<data<<endl;
		}
};
int main()
{
    C c1;
    C c2(10);
}
