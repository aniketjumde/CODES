#include<iostream>
using namespace std;

class ABC
{
    private:
    int x;
    public:
    ABC(int x)
    {
        this->x=x;
    }
    friend class PQR;
    
};

class PQR
{
  public:
  void display(ABC &tob)
  {
    cout<<"X is "<<tob.x<<endl;
  }
};

int main()
{
    ABC aob(23);

    PQR bob;

    bob.display(aob);
}