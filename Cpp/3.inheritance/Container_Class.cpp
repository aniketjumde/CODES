#include<iostream>
using namespace std;

class B
{
    public:

    void show()
    {
        cout<<"I am in B show  !!"<<endl;
    }
};

class A
{
    B obB;
    public:

    void display()
    {
        cout<<"I am in A display !! "<<endl;
        obB.show();
    }
};


int main()
{
    A ob;
    ob.display();

    

}

