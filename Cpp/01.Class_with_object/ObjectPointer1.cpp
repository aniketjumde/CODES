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
        rno=15;
        name="AAA";
        per=99.65;
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
    student *p=new student;
    student *q= new student(16,"Aniket",100.0);
    student *r= new student(*q);

    p->display();
    q->display();
    r->display();

    delete p;
    delete q;
    delete r;

    return 0;
}