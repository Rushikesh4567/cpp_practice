#include<iostream>
using namespace std;
class Base{
	public:
		virtual void show()
		{
			cout<<"This is base class."<<endl;
		}
};
class Derived:public Base
{
	public:
		void show ()
		{
			cout<<"This is derived class."<<endl;	
		}	
};
int main()
{
	Base *b;
	Derived d;
	
	b=&d;
	b->show();
	
	return 0;
}
