// It is used to access static members of a class

#include<iostream>
using namespace std;

class ABC
{ 
    public:

    static void show()
    {
        cout<<"I am static "<<endl;
    }

 
};

int main()
{
    ABC ob;

    ABC::show();

    return 0;
}
