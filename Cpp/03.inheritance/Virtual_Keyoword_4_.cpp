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
    derived ob;
    ob.display();
    return 0;
}

/*
    OUTPUT :
 
            I am display in derived

*/