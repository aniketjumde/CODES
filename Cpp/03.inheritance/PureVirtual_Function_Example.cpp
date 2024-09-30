#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void Calculate_Area()=0;

};

class Rectangle:public Shape
{
    int length;
    int width;
    int Area_of_rectangle;

    public:
    Rectangle(int length=0,int width=0)
    {
        this->length=length;
        this->width=width;
    }
    void Calculate_Area()
    {
        Area_of_rectangle = length * width;
        cout<<"Area of Recatngle : "<<Area_of_rectangle<<endl;
    }

};

class Circle: public Shape
{
    float radius;
    float Area_of_circle;

    public:
    Circle( float radius=0)
    {
        this->radius=radius;
    }
    void Calculate_Area()
    {
        Area_of_circle = 3.14 * radius * radius ;
        cout<<"Area of cicle : "<<Area_of_circle<<endl; 
    }

};


int main()
{
    Rectangle A(4,8);
    A.Calculate_Area();

    Circle C(2);
    C.Calculate_Area();



    return 0;
}