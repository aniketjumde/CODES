#include<iostream>
using namespace std;

int i=89;
class ABC
{
    private:
    int i;
    float f;
    public:
    ABC()
    {
        i=0.0;
        
    }
    ABC(int i)
    {
        this->i=i;
        
    }
    ABC(ABC &tob)
    {
        i=tob.i;
        
    }
    void display()
    {
        int i=35;
        cout<<"local variable is  i "<<i<<endl<<endl;
        cout<<"globale variable is i "<<::i<<endl<<endl;
        cout<<" value of memory is i "<<this-> i<<endl<<endl;
    }
    ~ABC()
    {
        cout<<"Destructor is Runing"<<endl;
    }
};

int main()
{
    ABC ob1;
    ob1.display();

    ABC ob2(21);
    ob2.display();

    ABC ob3(ob2);
    ob3.display();

    return 0;
}