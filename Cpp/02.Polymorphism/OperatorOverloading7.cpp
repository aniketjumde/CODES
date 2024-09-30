/* Unary opearator 
Post decrement
   pree decrement
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

    ABC operator --(int)
    {
        ABC tob;
        tob.i=i;
        tob.f=f;

        i--;
        f--;

        return tob;
    }

    ABC operator --()
    {
        ABC tob;
        i--;
        f--;

        tob.i=i;
        tob.f=f;

        return tob;
    }
    
};


int main()
{
    ABC ob1(2,5.8);
    ABC ob2;
    ABC ob3(5,6.9);
    
    cout<<"Post Decreement"<<endl;
    ob2=ob1--;
    cout<<"OB1 :"<<endl;
    ob1.display();
    cout<<"OB2 :"<<endl;
    ob2.display(); 

    cout<<"Pree Decrement"<<endl;
    ob2=--ob3;
    cout<<"OB1 :"<<endl;
    ob3.display();
    cout<<"OB2 :"<<endl;
    ob2.display();
}