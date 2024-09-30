#include<iostream>
using namespace std;

class rectangle
{
    private:
    float length,breath,area,parameter;
    public:
    void accept()
    {
        cout<<"Enter the length :";
        cin>>length;
        cout<<"Enter the breadth :";
        cin>>breath;

    }
    void area_rectangle()
    {
      area=length*breath;

    }
    void parameter_rectangle()
    {
        parameter=2*(length + breath);
    }
    void show()
    {
        cout<<"The length of rectangle :"<<length<<endl;
        cout<<"The breadth of rectangle :"<<breath<<endl;
        cout<<"The area of rectangle is :"<<area<<endl;
        cout<<"The parameter of rectangle is :"<<parameter<<endl;
    }
};
int main()
{
    rectangle ob;

    ob.accept();
    ob.area_rectangle();
    ob.parameter_rectangle();
    ob.show();

    return 0;
}
