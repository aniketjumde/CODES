#include<iostream>
using namespace std;

class Odd_Even
{
    private:
    int num;

    public:
    Odd_Even()
    {
        num;
    }
    Odd_Even(int &n)
    {
        num=n;
    }
    void  condtion_of_odd_even()
    {
        if(num%2)
        {
            cout<<" "<<num<<" is odd number"<<endl;
        }
        else
        {
            cout<<num<<" is even number"<<endl;
        }
    }
    ~Odd_Even()
    {

    }
};

int main()
{
  int  n;
  cout<<"Enter the number:";
  cin>>n;

  Odd_Even *p=new Odd_Even(n);
  p->condtion_of_odd_even();

  delete p;

  return 0;
}