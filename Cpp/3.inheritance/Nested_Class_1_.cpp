#include<iostream>
using namespace std;

class Human
{
    public:
    void display()
    {
        cout<<"I am in Human "<<endl;
    }

    class Hand
    {
        public:
        void show()
        {
            cout<<"I am in human hend"<<endl;
        }
    }obb;

};

int main()
{
    Human ob;
    ob.display();

    //Hand obb; Give error Because Hand (inside a class) Object is Not created 

    ob.obb.show();


    return 0;
}

/* OUTPUT :
                I am in Human 
                I am in human hend
*/