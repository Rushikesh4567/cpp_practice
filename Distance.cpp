#include<iostream>
#include<string>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
		
	public:
		
		Distance(int f,float i)
		{
			feet=f;
			inches=i;
		}
		
		void show()
		{
			cout<<"Distance is "<<feet<<" feet"<<" and "<<inches<<" inches"<<endl;
		}
};
int main()
{
	Distance d(6,3.3);
	d.show();
}
