#include<iostream>
using namespace std;

class base
{
    public:
    virtual void display()         
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
    /* Base ponter can point to derived class object */

    base *p;                  // virual keyword use kelas base pointer jya class cha objectla point 
    derived ob;               //karto tyacha display() call honar  
    p=&ob;

    p->display();

    /*  ANOTHER WAY
    
        base *p=new derived();
        p->display();
    
    
    */

   return 0;
}

/*
    OUTPUT :
 
            I am display in derived

*/

