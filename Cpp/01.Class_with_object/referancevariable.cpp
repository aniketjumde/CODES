#include<iostream>
using namespace std;
int main()
{
    int i=11;
    int &r=i;  // &r is a reference variable

    cout<<i<<endl;
    cout<<r<<endl;
    r++;
    cout<<i<<endl;
    cout<<r<<endl;
    i++;

    cout<<i<<endl;
    cout<<r<<endl;

    return 0;


}