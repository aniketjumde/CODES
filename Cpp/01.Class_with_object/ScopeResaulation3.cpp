//. Global variable access

//1 : Resolving Ambiguity between Global variable and Local Variable. 

#include<iostream>
using namespace std;

int x=3;

class ABC
{
    private:
    int x;
    public:
    ABC()
    {
        x=23;
    }
    
    void display()
    {
        int x=34;
        cout<<"X is : "<<x<<endl;
        cout<<"X is : "<<this->x<<endl;
        cout<<"X is : "<<::x<<endl;
    }

};

int main()
{
    ABC ob;
    ob.display();

    return 0;
}
