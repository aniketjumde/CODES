//inline function

#include<iostream>
using namespace std;

inline int squr(int x)
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