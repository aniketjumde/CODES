#include<iostream>
#include<fstream>
using namespace std;

class student
{
    public:
    int rno;
    string name;
    float per;

    public:
    void accept()
    {
        cout<<"Enter the roll number :";
        cin>>rno;
        cout<<"Enter the Name :";
        cin>>name;
        cout<<"Enter the percentage :";
        cin>>per;
    }
    
    void display()
    {
        cout<<rno<<" "<<name<<" "<<per<<endl;
    }
};

int main()
{
    
}