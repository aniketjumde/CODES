// as a Non- member function overloading with data and operator
#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float f;
    public:
    ABC(int x=0,float y=0.0)
    {
        i=x;
        f=y;
    }
    void display()
    {
        cout<<"i :"<<i<<endl;
        cout<<"f :"<<f<<endl;
    }
    friend ABC operator +(ABC &fob,int data);
    friend ABC operator -(ABC &fob,int data);    

};

ABC operator +(ABC &fob,int data)
{
    ABC tob;
    tob.i=fob.i+data;
    tob.f=fob.f+data;

    return tob;
}

ABC operator -(ABC &fob,int data)
{
    ABC tob;
    tob.i=fob.i-data;
    tob.f=fob.f-data;

    return tob;
}

int main()
{
    ABC ob1(4,7.8);
    ABC ob3;

    //cout<<"Addition of operator and integer"<<endl;

    ob3=ob1+7; //ob1 parameter
                  // 7 parameter  
    ob3.display();

    //cout<<"Substraction of operator and integer "<<endl;

    ob3=ob1-4;

    ob3.display();
    return 0;
}