#include<iostream>
using namespace std;

class ABC
{
    public:

    void main()
    {
        cout<<"ANIKET"<<endl;
    }

    void main(int i)
    {
        cout<<"AJ  "<<i<<endl;

    }

    void main(float f)
    {
        cout<<"India  "<<f<<endl;
    }

};

int main()
{
    ABC ob;

    ob.main();
    ob.main(12);
   // ob.main(2.4);

    return 0;
}