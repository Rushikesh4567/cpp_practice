#include <iostream>
#include <cmath> // for M_PI

using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual double area() const {
        return 0;
    }

    // Virtual destructor (good practice)
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area()
    double area() const override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Override area()
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape1 = new Rectangle(4.0, 5.0);
    Shape* shape2 = new Circle(3.0);

    cout << "Area of Rectangle: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}

