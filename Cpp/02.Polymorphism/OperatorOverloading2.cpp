//Operator Overloading as a Non-Member fonction
#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float f;
    public:
    ABC(int i=0,float f=0.0)
    {
        this->i=i;
        this->f=f;
    }
    void display()
    {
        cout<<"i :"<<i<<endl;
        cout<<"f :"<<f<<endl;
    }
    friend ABC operator + (ABC &fob,ABC &sob);
    friend ABC operator - (ABC &fob,ABC &sob);
};

ABC operator + (ABC &fob,ABC &sob)
{
    ABC tob;
    tob.i=fob.i+sob.i;
    tob.f=fob.f+sob.f;

    return tob;
}

ABC operator - (ABC &fob,ABC &sob)
{
    ABC tob;
    tob.i=fob.i-sob.i;
    tob.f=fob.f-sob.f;

    return tob;
}

int main()
{
    ABC ob1(2,5.8);
    ABC ob2(3,4.2);
    ABC ob3;
    ob3 = ob1 + ob2; // ob1 is parameter
                     // ob2 is parameter

    cout<<"ADDITION"<<endl;

    ob3.display();

    ob3= ob1 - ob2 ;

    cout<<"SUBSTRACTION"<<endl;

    ob3.display();

    return 0;
}