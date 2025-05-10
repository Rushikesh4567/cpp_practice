#include <iostream>
using namespace std;

class A 
{
public:
    A() 
	{
        cout << "Constructor of A\n";
    }
    void show() 
	{
        cout << "Class A method\n";
    }
};

class B : virtual public A 
{
public:
    B() 
	{
        cout << "Constructor of B\n";
    }
};

class C : virtual public A 
{
public:
    C() 
	{
        cout << "Constructor of C\n";
    }
};

class D : public B, public C 
{
public:
    D()
	{
        cout << "Constructor of D\n";
    }
};

int main() 
{
    D obj;
    obj.show(); 
    return 0;
}

