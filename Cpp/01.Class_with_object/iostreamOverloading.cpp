#include<iostream>
using namespace std;

class student
{
    private:
    int id;
    string name;
    float salary;

    public:
    friend istream& operator >>(istream &in,student &tob);
    friend ostream& operator << (ostream &out,student &tob);

    
};

istream& operator >>(istream &in,student &tob)
{
    cout<<"Enter the id   :";
    cin>>tob.id;

    cout<<"Enter the name  :";
    in>>tob.name;

    cout<<"Enter the salary :";
    in>>tob.salary;
}

ostream& operator << (ostream &out,student &tob)
{
    out<<"----Student Information----"<<endl;
    out<<"id      : "<<tob.id<<endl;
    out<<"Name    : "<<tob.name<<endl;
    out<<"Salary  :"<<tob.salary<<endl;
}

int main()
{
    student ob;
    cin>>ob;
    cout<<ob;
    

}