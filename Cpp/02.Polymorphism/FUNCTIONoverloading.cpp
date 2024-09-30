#include<iostream>
using namespace std;

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

int main()
{
    display();
    display(11);
    
    display(1,3.4);
    display(3.2,2);
    display(3.5f);

    return 0;
}