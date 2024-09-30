#include<iostream>
using namespace std;

class A
{
    int i;
    public:
    A(int x)
    {
        i=x;
    }
    void display()
    {
       cout<<"i :"<<i<<endl; 
    }
};

class B
{
    int j;
    public:
    B(int y=0)
    {
        j=y;
    }
    void display()
    {
        cout<<"j :"<<j<<endl;
    }
};

class C:public A,public B
{
    int k;
    public:
    C(int m=0,int n=0,int o=0):A(m),B(n),k(o)
    {

    }
    void display()
    {
        A::display();
        B::display();
        cout<<"K :"<<k<<endl;
    }
    
};
int main()
{
    C ob(12,56,90);
    ob.display();
}