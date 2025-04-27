#include<iostream>
using namespace std;
class Circle{
	int radius;
	float area=0.0;
	
	public:
		Circle(int r)
		{
			radius=r;
		}
		void display()
		{
			area=3.142*radius*radius;
			cout<<"\nThe area of circle is "<<area<<" Sq.cm"<<endl;
		}
};
int main()
{
	int s;
	cout<<"\nEnter radius = ";
	cin>>s;
	
	Circle c1(s);
	
	c1.display();
	
}
