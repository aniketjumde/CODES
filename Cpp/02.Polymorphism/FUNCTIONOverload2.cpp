#include<iostream>
using namespace std;

class ABC
{
    public:
    void display()
{
    cout<<"ENG "<<endl;
}
void display(int i)
{
    cout<<"India "<<i<<endl;
}
void display(float f)
{
    cout<<"America "<<f<<endl;
}
void display(int i,float f)
{
    cout<<"Shrilanka "<<i<<" " <<f<<endl;
}
void display(float f,int i)
{
    cout<<"Bangladesh "<<f<<" " <<i<<endl;
}


};

int main()
{
    ABC ob;
    ob.display();
    ob.display(11);
    
    ob.display(1,3.4);
    ob.display(3.2,2);
    ob.display(3.5f);

    return 0;
}