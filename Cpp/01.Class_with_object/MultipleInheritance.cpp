#include<iostream>
using namespace std;

class A
{
    protected:
    int i;

    public:
    void accept_a()
    {
        cout<<"Enter the no:";
        cin>>i;
    }
    void display_a()
    {
        cout<<"i: "<<i<<endl;
    }
};

class B
{
    protected:
    float f;
    public:
    void accept_b()
    {
        cout<<"Enter the no:";
        cin>>f;
    }
    void display_b()
    {
        cout<<" F :"<<f<<endl;
    }
};

class c:public A,public B
{
    private:
    int x;
    float y;

    public:
    c()
    {
        x=0;
        y=0;
    }
    c(int x,float y)
    {
        this->x=x;
        this->y=y;
    }
    c( c &tob)
    {
        x=tob.x;
        y=tob.y;
    }

    void display_c()
    {
        display_a();
        display_b();
        cout<<"X is :"<<x<<endl;
        cout<<"Y is :"<<y<<endl;
    }
    void display_d()
    {
        cout<<"i: "<<i<<" f :"<<f<<endl;
    }

};

int main()
{
    //c ob;
    c ob(3,4);
    //c ob(ob);
    ob.accept_a();
    ob.accept_b();
    ob.display_c();
    ob.display_d();
}

