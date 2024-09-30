#include<iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"I am show in A"<<endl;
    }

};
class B
{
    public:
    void print()
    {
        cout<<"I am print in B"<<endl;
    }
};

class C : public A,public B
{
    public:
    void display()
    {
        cout<<"I am display in C"<<endl;
    }

};

int main()
{
    C ob;
    ob.show();
    ob.print();
    ob.display();
}

/* OUTPUT :
                I am show in A
                I am print in B
                I am display in C
*/