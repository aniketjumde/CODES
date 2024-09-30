#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float f;
    public:
    ABC()
    {
    
        i=7; // default constructer
        f=3.5;
    }
    ABC(int x,float y)
    {
        // parametrized constructur
        i=x;
        f=y;
    }
    ABC(ABC &tob)
    {
        // Copys constructur
        i=tob.i;
        f=tob.f;
    }


    void display()
    {
        cout<<"i is "<<i<<endl;
        cout<<"F is "<<f<<endl;
    }


};
int main()
{
    ABC ob;
    ABC ob1(3,4.8);
    ABC ob2(ob1);
    ob.display();
    ob1.display();
    ob2.display();

    return 0;
}