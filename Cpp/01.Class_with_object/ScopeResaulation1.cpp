// It used to defined member function outside the class

#include<iostream>
using namespace std;

class ABC
{
    public:
    void display();
    void show(int);

};

void ABC::display()
{
    cout<<" I am in Display "<<endl;
}

void ABC::show(int i)
{
    cout<<"I am in show"<<endl;
    cout<<"Value of i :"<<i<<endl;
}

int main()
{
    ABC ob;
    ob.display();
    ob.show(56);

    return 0;
}