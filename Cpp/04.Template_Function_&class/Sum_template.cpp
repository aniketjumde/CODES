/* Create a template function called `sum()` to calculate the sum of elements in an array of any data 
type. Test the function with integer, floating-point, and character arrays. */

#include<iostream>
using namespace std;

template<class T1,class T2>
T1 sum(T1 arr[],T2 n)
{
    T1 sum;
    sum=0;
    for(T2 i=0;i<n;i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;
    cout<<"How many element you want two store :";
    cin>>n;
    int intarr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data :";
        cin>>intarr[i];
    }

    cout<<"Sum of integer  array is : "<<sum<int,int>(intarr,n)<<endl;

    int m;
    cout<<"How many element you want two store :";
    cin>>m;
    float floatarr[m];
    
    for(int  i=0;i<m;i++)
    {
        cout<<"Enter the data :";
        cin>>floatarr[i];
    }

    cout<<"Sum of float array is : "<<sum<float,int>(floatarr,m)<<endl;

    int x;
    cout<<"How many element you want two store :";
    cin>>x;
    char chararr[x];
    
    for(int  i=0;i<x;i++)
    {
        cout<<"Enter the data :";
        cin>>chararr[i];
    }

    cout<<"Sum of float array is : "<<sum<char,int>(chararr,x)<<endl;

    return 0;
}