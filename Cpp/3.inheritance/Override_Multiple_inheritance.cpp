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
class B
{
    public:
    void display()
    {
        cout<<"I am display in B"<<endl;
    }
};

class C : public A,public B
{
    public:
    void display()
    {
        A::display();
        B::display();
        cout<<"I am display in C"<<endl;
    }

};

int main()
{
    C ob;
    ob.display();
}