/* Implement a class invert data with three member functions all with same name invert
1.int invert(int)  : reverse the given number 
2.void invert(char *) : reverse the given string 
3.void invert (int *,int) : reverse the given integer array */


#include<iostream>
#include<string.h>
using namespace std;

class Invert
{
    public:

    int invert(int num)
    {
        int rev;
        rev=0;
        while(num>0)
        {
            rev = (rev*10) + (num%10) ;
            num = num/10 ;
        }
        return rev;
    }

    void invert(char p[])
    {
        int i,j,str;
        i=0;
        j=strlen(p)-1;

        while(j>i)
        {
            char t = p[i];
            p[i]=p[j];
            p[j]=t;

            i++;
            j--;
        }
        
        cout<<"Reverse string is : "<<p<<endl;

    }

    void invert(int a[],int n)
    {
        cout<<"Reverse Array is :";
        for(int i=n-1;i>=0;i--)
        {
            cout<<" "<<a[i];
        }
    }
};

int main(){
    Invert ob;
    int num;
    cout<<"Enter the number :";
    cin>>num;
    
    cout<<"Reverse No : "<<ob.invert(num)<<endl;

    
    char s[90];

    cout<<"Enter the string :";
    cin>>s;

    ob.invert(s);

    int m;
    int array[m];

    cout<<"Enter how many number in array :";
    cin>>m;

    for(int i=0;i<m;i++)
    {
    cout<<"Enter the number :";
    cin>>array[i];
    }
    
    ob.invert(array,m);

    return 0;
}