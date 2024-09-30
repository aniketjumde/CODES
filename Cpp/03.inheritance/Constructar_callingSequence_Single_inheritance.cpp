//single inheritance constructer with override
#include<iostream>
using namespace std;

class A
{
    int i;
    float f;

    public:
    A(int i=0,float f=0.0):i(i),f(f){}
    void display()
    {
        cout<<"I am display in A"<<endl;
        cout<<"i :"<<i<<endl;
        cout<<"f :"<<f<<endl;
    }
    ~A()
        {
            cout<<"I am Destructer  in A"<<endl;
        }
    
};
class B:public A
{
    int a;
    float b;
    public:
    B(int m=0,float n=0.0,int p=0,float q=0.0):A(m,n),a(p),b(q){}

    void display()
    {
        A::display(); //override
        cout<<"I am display in B"<<endl;
        cout<<"a :"<<a<<endl;
        cout<<"b :"<<b<<endl;
    }
    ~B()
    {
        cout<<"I am destructer in B"<<endl;
    }
};

int main()
{
    B ob(3,6.7,8,2.3);
    ob.display();
}

/*  OUTPUT :
I am display in A
i :3
f :6.7
I am display in B
a :8
b :2.3
I am destructer in B
I am Destructer  in A */