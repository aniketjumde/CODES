#include<iostream>
using namespace std;

class Date
{
    private:
    int DD;
    int mm;
    int yy;

    public:
    Date(int DD=0,int mm=0,int yy=0)
    {
        this->DD=DD;
        this->mm=mm;
        this->yy=yy;

    }
    void display()
    {
        cout<<DD<<"-"<<mm<<"-"<<yy<<endl;
    }
};

class Student
{
    private:
    int roll_no;
    string name;
    float per;
    float fees;
    Date Birth_date;

    public:
    Student(int roll_no,string name,float per,float fees,Date Birth_date)
    {
        this->roll_no=roll_no;
        this->name=name;
        this->per=per;
        this->fees=fees;
        this->Birth_date=Birth_date;
    }
    
    void display()
    {
        cout<<"Roll No    : "<<roll_no<<endl;
        cout<<"Name       : "<<name<<endl;
        cout<<"percentage : "<<per<<endl;
        cout<<"Fees       : "<<fees<<endl;
        cout<<"Birth Date : ";
        Birth_date.display();
        
    }
   
};

class Teacher
{
    private:
    int id;
    string name;
    float salary;
    Date Joining_date;

    public:

    Teacher(int id,string name,float salary,Date Joining_date)
    {
        this->id=id;
        this->Joining_date=Joining_date;
        this->name=name;
        this->salary=salary;
    }

    void show()
    {
        cout<<"id           : "<<id<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Salary       : "<<salary<<endl;
        cout<<"Joining Date : ";
        Joining_date.display();
       
    }

};

int main()
{
    Date B(21,07,2005);

    Student S(16,"Aniket",94.96,18500,B);
    cout<<"--------------------------------Student Information---------------------------------"<<endl;
    S.display();

    cout<<"---------------------------------Teacher Informatin----------------------------------"<<endl;
    Date D(15,07,2010);
    Teacher t(200,"Gadekar sir",150000,D);
    t.show();

    return 0;

}