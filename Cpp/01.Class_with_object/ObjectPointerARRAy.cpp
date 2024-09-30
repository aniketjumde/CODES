#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
    int rno;
    string name;
    float per;

    public:
    student()
    {
        rno;
        name;
        per;
        cout<<"Default constructer"<<endl;
    }
    student(int rno,string name,float per)
    {
        this->rno=rno;
        this->name=name;
        this->per=per;
        cout<<"Parametrized constructer"<<endl;
    }
    student(student &tob)
    {
        rno=tob.rno;
        name=tob.name;
        per=tob.per;
        cout<<" Copy constructer"<<endl;
    }
    void accept()
    {
        cout<<"Enter the rno:";
        cin>>rno;
        cin.get();
        cout<<"Enter the name:";
        getline(cin,name);
        cout<<"Enter the per";
        cin>>per;
    }
    void display()
    {
        cout<<"rno :"<<rno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"per  :"<<per<<endl;
    }
    ~student()
    {
        cout<<"Destructer run"<<endl;
    }
};

int main()
{
    student *p;
    int n;
    cout<<"How many student are appeared in exam:";
    cin>>n;

    p=new student[n];

    for(int i=0;i<n;i++)
    {
        p[i].accept();
    }

    for(int i=0;i<n;i++)
    {
        p[i].display();
    }

    delete []p;

    cout<<"Done"<<endl;


    
}