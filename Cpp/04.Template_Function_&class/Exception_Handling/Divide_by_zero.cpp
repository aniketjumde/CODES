#include<iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    double result;

    cout<<"Enter the first number  :";
    cin>>num1;
    cout<<"Enter the Second number :";
    cin>>num2;

    try
    {
        if(num2==0)
        {
            throw num2;
        }

        result = num1 / num2 ;
        cout<<"The Divistion of Two number is : "<<result<<endl;

    }
    catch(double a)
    {
        cout<<"Divistion is Zero than answer is Infinity..!"<<endl;
        cout<<"Invalid number...!"<<endl;
    }

    return 0;
}
