#include<iostream>
using namespace std;

template<class t>
void swapping(t &a,t &b)
{
    t temp;                   
    temp = a;
    a = b;
    b= temp;                           
}
int main()
{
    int x,y;
    cout<<"Enter the first number :";
    cin>>x;
    cout<<"Enter the second number :";
    cin>>y;

    cout<<"Before swapping "<<endl<<"X :"<<x<<endl<<"Y :"<<y<<endl;

    swapping<int>(x,y);

    cout<<"After swapping "<<endl<<"X :"<<x<<endl<<"Y :"<<y<<endl;

    float a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;

    cout<<"Before swapping "<<endl<<"X :"<<a<<endl<<"Y :"<<b<<endl;

    swapping<float>(a,b);

    cout<<"After swapping "<<endl<<"X :"<<a<<endl<<"Y :"<<b<<endl;

    char m,n;
    cout<<"Enter the first character :";
    cin>>m;
    cout<<"Enter the second character :";
    cin>>n;

    cout<<"Before swapping "<<endl<<"X :"<<m<<endl<<"Y :"<<n<<endl;

    swapping<char>(m,n);

    cout<<"After swapping "<<endl<<"X :"<<m<<endl<<"Y :"<<n<<endl;



    return 0;
}