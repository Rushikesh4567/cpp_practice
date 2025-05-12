#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual void draw() 
	{  
        cout << "Drawing Shape" << endl;
    }
};


class Circle : public Shape 
{
public:
    void draw() override 
	{  
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape 
{
public:
    void draw() override 
	{
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* shapePtr;       

    Circle c;
    Square s;

    shapePtr = &c;         
    shapePtr->draw();      

    shapePtr = &s;         
    shapePtr->draw();      

    return 0;
}

