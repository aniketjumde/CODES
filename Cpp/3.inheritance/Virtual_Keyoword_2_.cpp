#include<iostream>
using namespace std;

class base
{
    public:
    void display()
    {
        cout<<"I am display in Base "<<endl;
    }
};

class derived : public base
{
    public:
    void display()
    {
        cout<<"I am display in derived "<<endl;
    }
};

int main()
{
    /* Base class pointer point to Derived class object*/

   base *p;
   derived ob;
   p=&ob;
   p->display();

    /* Another way 

    base *p=new derived();

    p->display();

    */

    return 0;
}

/*
    OUTPUT :
 
            I am display in Base

*/