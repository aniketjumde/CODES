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
class B:public A
{
    public:
    void print()
    {
        cout<<"I am Display in B"<<endl; //there are two member function in B(show,display)
    }
};
class c : public B
{
    public:
    void display()
    {
        cout<<"I am in C display"<<endl;
    }
};

int main()
{
   c ob;
   ob.show();
   ob.print();
   ob.display();

}

/*OUTPUT
I am show in A
I am Display in B
I am in C display
*/