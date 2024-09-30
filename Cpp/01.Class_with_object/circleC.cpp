#include<iostream>
using namespace std;

class circle
{
	private:
		float radius ,ans;

	public:
		void display()
		{
			cout<<"Enter the radius:";
			cin>>radius;
		}
		void area()
		{
			ans=3.14*radius*radius;
		}
		void show()
		{
			cout<<"Radius of circle is "<<radius<<"\n";
			cout<<"The area of circle is "<<ans<<"\n";
			
		}
};

int main()
{
	circle ob;
	ob.display();
	ob.area();
	ob.show();

	return 0;

}