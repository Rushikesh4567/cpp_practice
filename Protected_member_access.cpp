#include <iostream>
using namespace std;

// Base class
class Base 
{
protected:
    int protectedVar;

public:
    void setProtectedVar(int val) 
	{
        protectedVar = val;
    }
};

// Derived class
class Derived : public Base 
{
public:
    void display() 
	{
        cout << "Accessing protected member from Derived class: " << protectedVar << endl;
    }
};

int main() 
{
    Derived obj;
    obj.setProtectedVar(42);  // Accessing via public function
    obj.display();            // Accessing protected member through derived class method

    // cout << obj.protectedVar;  ? Not allowed: protected member can't be accessed directly in main
    return 0;
}

