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
		
		C(const C &obj)                                               // copy constructor
		{
			data=obj.data;
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
    c2.display();
    
    C c3=c2;
    c3.display();                     // shallow copy (means both are using same memory locations)
}
