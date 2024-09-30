#include<iostream>
using namespace std;
class add
{
    private:
    int num1,num2,sum;

    public :
    void accept()
    {
        cout<<"enter the first number : ";
        cin>>num1;

        cout<<"enter the second number : ";
        cin>>num2;
    }
    void calculate()
    {
        sum=num1+num2;
    }
    void display()
    {
        cout<<"sum off two number is "<<sum<<endl;
    }
};
int main() 
{   int i;
    
    cout<<"enter the number : ";
    cin>>i;
    
    add ob[i];
    ob[i].accept();
    ob[i].calculate();
    ob[i].display();

    return 0;
}