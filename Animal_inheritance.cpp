#include<iostream>
#include<string>
using namespace std;

class Animal 
{
public:
    void show() 
	{
        cout << "\nThis is parent class Animal.";
    }
};

class Dog : public Animal 
{
public:
    void showdetails() 
	{
        cout << "\nThis is base class Dog inherited from Class Animal.";
    }
};

class Labrador : public Dog 
{
public:
    void show_d() 
	{
        cout << "\nThis is base class Labrador which is derived from Dog.";
    }
};

int main() 
{
    Animal a;
    a.show();  

    Dog d;
    d.show();         
    d.showdetails();  

    Labrador l;
    l.show();         
    l.showdetails();  
    l.show_d();       

    return 0;
}

