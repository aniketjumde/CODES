/* In case of add data as ob2=9+ob1;
 we use friend function (Non member function)
anotter case of problem solved as a member function(Not use of member function)
*/
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

    friend ABC operator +(int data ,ABC &fob);
    friend ABC operator -(int data ,ABC &fob);
    
};

ABC operator +(int data ,ABC &fob)
{
    ABC tob;
    tob.i = data + fob.i;
    tob.f = data + fob.f;

    return tob;
}

ABC operator -(int data,ABC &fob)
{
    ABC tob;
    tob.i = data + tob.i;
    tob.f = data + tob.f;

    return tob;
}

int main()
{
    ABC ob1(2,5.8);
    ABC ob2(3,4.2);
    ABC ob3;
    ob3 =  7 + ob1; // ob1 is parameter
                     // ob2 is parameter

    cout<<"ADDITION"<<endl;

    ob3.display();

    ob3 = 3 + ob1 ;

    cout<<"SUBSTRACTION"<<endl;

    ob3.display();

    return 0;
}