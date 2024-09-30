#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am in A display !!"<<endl;
    
    }

    class B
    {
        public:

        void show()
        {
            cout<<"I a in B display !!"<<endl;
        }
    }obB;
};
int main()
{
    A ob;
    ob.display();

    ob.obB.show();
    
    return 0;
}