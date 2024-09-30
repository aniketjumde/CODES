#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;
    float per;

    public:
    student():roll_no(00),name("XYZ"),per(10.0)
    {

    }

    student(int roll_no,string name,float per):roll_no(roll_no),name(name),per(per)
    {

    }
    student(student &tob):roll_no(tob.roll_no),name(tob.name),per(tob.per)
    {

    }

    void display()
    {
        cout<<"------------Student information---------------"<<endl;
        cout<<" "<<roll_no<<" "<<name<< " "<<per<<endl;
    }
};    
int main()
{
    student ob1;
    ob1.display();
    student ob2(16,"ANIKET",9.8);
    ob2.display();
    student ob3(ob2);
    ob3.display();


    return 0;
}