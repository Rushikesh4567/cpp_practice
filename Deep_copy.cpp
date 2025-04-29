#include<iostream>
using namespace std;

class C{
	private:
		int *data;
	public:
		C()
		{
			cout<<"Default constructor is called."<<endl;
		}
		
		C(int value)
		{
			data=new int(value);
			cout<<"Parameterised constructor is called."<<endl;
		}
		
		C(const C &obj)                                               // copy constructor
		{
			data=new int(*(obj.data));
		}
		void display()
		{
			cout<<"value given is "<<*data<<endl;
		}
		
};
int main()
{
    C c1;
    C c2(10);
    
    C c3=c2;
    
    c2.display();
    c3.display();                     // Deep copy (it means both objects are using different memory locations)
}
