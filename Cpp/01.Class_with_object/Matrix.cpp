#include<iostream>
using namespace std;
int main()
{
    int Matrix1[3][3],Matrix2[3][3],Result[3][3];
    int i,j;
    cout<<"Element of \"Matrix1\":"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Element of Matrix1 is( "<< i+1 << j+1<<"):";
            cin>>Matrix1[i][j];
        }
    }
    cout<<"Element of \"Matrix2\":"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         cout<<"Element of Matrix2 is( "<< i+1 << j+1<<"):";
         cin>>Matrix2[i][j];   
        }
    }
    cout<<" Matrix1 is:"<<endl;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         cout<<" "<<Matrix1[i][j]  ; 
        }
        cout<<endl;
    }
    cout<<" Matrix2 is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         cout<<" "<<Matrix2[i][j]  ; 
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Result[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }
    cout<<"Resultant Matrix is:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<" "<<Result[i][j];
        }
        cout<<endl;
    }
}