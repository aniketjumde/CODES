#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am display in A"<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {   
        A::display();   //override base class function in derived class
        cout<<"I am Display in B"<<endl; //there are two member function in B(show,display)
    }
};

int main()
{
    B ob;
    ob.display();
};