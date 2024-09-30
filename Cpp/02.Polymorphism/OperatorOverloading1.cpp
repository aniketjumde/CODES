// Overloading as  a member Function

#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float j;

    public:
    ABC(int x=0,float y=0.0)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<"i : "<<i<<endl;
        cout<<"j : "<<j<<endl;
    }

    ABC operator + (ABC &sob)
    {
        ABC tob;
        tob.i = i + sob.i;
        tob.j = j + sob.j;

        return tob;
    }

    ABC operator - (ABC &sob)
    {
        ABC tob;
        tob.i=i-sob.i;
        tob.j=j-sob.j;

        return tob;
    }


};

int main()
{
    ABC ob1(3,5.7);
    ABC ob2(5,6.5);
    ABC ob3;

    cout<<"Addition of operartor is :"<<endl;
    ob3=ob1+ob2; //ob1 is caller
                //ob2 is parameter
    ob3.display();            

    cout<<"Substraction of Operator is :"<<endl;
    ob3=ob1-ob2;    
    ob3.display();
}