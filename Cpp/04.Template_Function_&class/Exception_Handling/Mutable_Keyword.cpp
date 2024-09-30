

#include<iostream>
using namespace std;

class Show
{
    public:
    int i;
    mutable int j;
    Show(int a=0,int b=0)
    {
        i=a;
        j=b;
    }

    void seta(int a=0)
    {
        i=a;
    }
    void steb(int b=0)
    {
        j=b;
    }
    void display()
    {
        cout<<"i : "<<i<<endl;
        cout<<"j : "<<j<<endl;
    }
};

int main()
{
    Show ob1(2,14);
    ob1.display();
  //ob1.i=20    Error occured  it is constant value we cannot change  
    ob1.j=90;
    cout<<"a : "<<ob1.i<<" b : "<<ob1.j<<endl;
    return 0;
}
