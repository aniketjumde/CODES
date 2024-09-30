#include<iostream>
using namespace std;

class Person
{
    int id;
    string name;

    static int cnt; 

    public:
    void accept()
    {
        id=cnt;
        cnt++;

        cout<<"Enter the name : ";
        cin>>name;

    }
    void display()
    {
        cout<<id<<"\t"<<name<<"\t";
    }


};

int Person :: cnt=101;

class Hourly:public Person
{
    float rate;
    int hours;

    public:
    void accept()
    {
        Person::accept(); //override

        cout<<"Enter the rate :";
        cin>>rate;

        cout<<"Enter the hours :";
        cin>>hours;
    }

    void display()
    {
        Person::display();

        cout<<rate<<"\t"<<hours<<"\t"<<endl;
    }

};

class Salary : public Person
{
    float sal;

    public:

    void accept()
    {
        Person::accept();
        
        cout<<"Enter the Salary :";
        cin>>sal;
    }

    void display()
    {
        Person::display();

        cout<<sal<<endl;
    }

};

int main()
{
    int n;
    int i;

    cout<<"How many Employee :";
    cin>>n;

    Hourly hob[n];

    for( i=0;i<n;i++)
    {
        hob[i].accept();
    }

    Salary sob[n];

    for( i=0;i<n;i++)
    {
        sob[i].accept();
    }

    cout<<"INO\tNAME|tRATE\tHours"<<endl;
    cout<<"-------------------------"<<endl;
    for( i=0;i<n;i++)
    {
        hob[i].display();
    }

    cout<<"INO\tNAME\tSalary"<<endl;
    cout<<"-----------------------"<<endl;


    for(i=0;i<n;i++ )
    {
        sob[i].display();
    }

    return 0;
}