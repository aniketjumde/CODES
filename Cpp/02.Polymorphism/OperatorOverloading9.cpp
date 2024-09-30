#include<iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;
    float percentage;

    public:
    friend istream operator >>(istream &in,student &sob);
    friend ostream operator <<(ostream &in,student &sob);


};

istream operator >>(istream &in,student &sob)
{

    cout<<"Enter the roll number :";
    in>>sob.roll_no;
    cout<<"Enter the Name        :";
    in>>sob.name;
    cout<<"Enter the percentage  :";
    in>>sob.percentage;

    //return in;
    
}
ostream operator <<(ostream &out,student &sob)
{
    out<<"------------Information of Student------------"<<endl;
    out<<"Roll_No     :"<<sob.roll_no<<endl;
    out<<"Name        :"<<sob.name<<endl;
    out<<"percentage  :"<<sob.percentage<<endl;

    //return out;
}

int main()
{
    student s;

    cin>>s;
    cout<<s;
}