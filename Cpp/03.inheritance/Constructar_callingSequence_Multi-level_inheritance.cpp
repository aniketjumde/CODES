#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int a=0)
    {
        this-> a=a;

    }
    void display()
    {
        cout<<"I am display in A"<<endl;
        cout<<"a :"<<a<<endl;
    }
    ~A()
    {
        cout<<"I am destructer in A"<<endl;
    }
};

class B:public A
{
    int b;
    public:
    B(int m=0,int n=0):A(m),b(n)
    {
    }
    void display()
    {
        A::display();
        cout<<"I am Display in B "<<endl;
        cout<<"b :"<<b<<endl;
    }
    ~B()
    {
        cout<<"I am destructer in B"<<endl;
    }
};

class C:public B
{
    int c;
    public:
    C(int x=0,int y=0,int z=0):B(x,y),c(z)
    {
    }
    void display()
    {
        B::display();
        cout<<"I am display in C"<<endl;
        cout<<"c :"<<c<<endl;
    }
    ~C()
    {
        cout<<"I am destructer in C"<<endl;
    }

};
int main()
{
    C ob(2,4,5);
    ob.display();
}