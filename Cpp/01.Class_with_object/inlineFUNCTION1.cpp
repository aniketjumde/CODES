// First program is simple Function used as a C langvage

#include<iostream>
using namespace std;

int squr(int x)
{

    return x*x;
}

int main()
{
    int num,ans;
    cout<<"Enter the number :";
    cin>>num;

    ans=squr(num);

    cout<<" Square of number is "<<ans<<endl;

    return 0;

}