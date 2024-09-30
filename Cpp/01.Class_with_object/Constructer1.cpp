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
        cout<<"I am default constructer"<<endl;
    }
    ABC(int x,float y):i(x),f(y)
    {
        cout<<"I am Parametrized constructer"<<endl;
    }
    ABC(ABC &tob):i(tob.i),f(tob.f)
    {
        cout<<"I am Copy Constructer"<<endl;
    }

    void display()
    {
        cout<<"Valu of i "<<i<<endl;
        cout<<"Value of f "<<f<<endl;
    }
    ~ABC()
    {
        cout<<"Destructer is Run"<<endl;
    }

};

int main()
{
    ABC ob1;
    ob1.display();
    ABC ob2(5,8.9);
    ob2.display();
    ABC ob3=ob2;
    ob3.display();

    return 0;
}