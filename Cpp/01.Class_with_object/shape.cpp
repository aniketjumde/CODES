#include<iostream>
using namespace std;

class shape
{
    public:
    void draw()
    {
    cout<<"Draw a shape"<<endl;
    }
};

class polygoan
{
    public:
    void plygoan()
    {
        cout<<"draw a polygoan"<<endl;
    }
};

class rectangle: public shape , public polygoan
{
    private:
    int width;
    int breadth;
    public:

    rectangle(int width ,int breadth)
    {
        this-> width = width;
        this-> breadth=breadth;
    }
    void display()
    {
        cout<<"draw a rectangle Width "<<width<<" breadth "<<breadth;
    }
    
};

int main()
{
    rectangle ob(2,5);
    ob.draw();
    ob.plygoan();
    ob.display();
}