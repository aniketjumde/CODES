#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float f;

    public:

    ABC():i(0),f(0.0)
    {
        cout<<"Default Constructer"<<endl;
    }
    ABC(int i,float f):i(i),f(f)
    {
        cout<<"Parametrized Constructer"<<endl;
    }
    ABC(ABC &tob):i(tob.i),f(tob.f)
    {
        cout<<"Copy Constructer"<<endl;
    }
    void display()
    {
        cout<<"Value of i :"<<i<<endl;
        cout<<"Value of f :"<<f<<endl;
    }
    ~ABC()
    {
        cout<<"Destructer is calling"<<endl;
    }
};
int main()
{
    int x;
    float y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    /*Dynamic memory Allocate*/
  ABC *p= new ABC;
  ABC *q= new ABC(x,y);
  ABC *r= new ABC(*q);

  p->display(); //(*p).display();
  q->display(); //(*q).display();
  r->display(); //(*r).display();

  delete p;
  delete q;
  delete r;
  
  cout<<"bye"<<endl;

    return 0;
}