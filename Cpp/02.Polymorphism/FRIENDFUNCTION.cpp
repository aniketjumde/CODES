#include<iostream>
using namespace std;

class ABC
{
    private:
    int x;
    float y;
    public:
    ABC(int i,float f)
    {
       x=i;
       y=f; 
    }
    friend int main();
    friend void show(ABC &);
};

void show(ABC &tob)
{
    cout<<" It is function created:"<<endl;
    cout<<" "<<tob.x<<" "<<tob.y<<endl;
}

int main()
{
    ABC ob(12,3.5);

    cout<<" "<<ob.x<<" "<<ob.y<<endl;

    show(ob);
    

    return 0;
}