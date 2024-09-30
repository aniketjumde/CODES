#include<iostream>
using namespace std;

class A
{
    private:
    int i;
    public:
    void display()
    {
        cout<<"value of i:"<<endl;
    }

};

class B:virtual public A
{
    private:
    int j;
    public:
    void display()
    {
        A::display();
        cout<<"Value of j:"<<endl;
    }
};
class C:virtual public A
{
    private :
    int k;
    public:
    void display()
    {
        A::display();
        cout<<"Value of k :"<<endl;
    }
};

class D:public B,public C
{
    private :
    int l;
    public:
    void display()
    {
        B::display();
        C::display();
        cout<<"Value of l :"<<endl;

    }

};

int main()
{
    D ob;
    ob.display();

    return 0;
}

/* OUTPUT 
            value of i:
            Value of j:
            value of i:
            Value of k :
            Value of l :    
*/