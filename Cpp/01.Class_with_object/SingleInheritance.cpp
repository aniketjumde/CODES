#include<iostream>
using namespace std;

class A
{
    protected:
    int a;

    public:

    void accept_A()
    {
        cout<<"Enter the number:";
        cin>>a;
    }
    void display_A()
    {
        cout<<"value of A is :"<<a<<endl;
    }

};

class B: public A
{
  int b,product;

  public:

  void accept_B()
  {
    accept_A();
    cout<<"Enter the number :";
    cin>>b;
  }
  void display_B()
  {
    display_A();
    cout<<"Value of B is :"<<b<<endl;
    
  }
  void cal_p()
  {
    product=a*b;
    cout<<"Product of a*b is :"<<product;
  }
};

int main()
{
    B ob;
    ob.accept_B();
    ob.display_B();
    ob.cal_p();
}