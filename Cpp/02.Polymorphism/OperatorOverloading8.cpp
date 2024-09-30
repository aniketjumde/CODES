/* Unary opearator 
 decrement
 decrement
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

    ABC operator -()
    {
        ABC tob;
        
        tob.i=-i;
        tob.f=-f;

        return tob;
    }
    
};


int main()
{
    ABC ob1(2,5.8);
    ABC ob2;
    ABC ob3(5,6.9);
    ob2= -ob1;
    ob2.display();
    
    
}