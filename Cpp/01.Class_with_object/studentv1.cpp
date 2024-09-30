#include<iostream>
using namespace std;

class student 
{
    private:
    int rno;
    char name[50];
    float per;
    public:
    void accept()
    {
        cout<<"Enter the roll number:";
        cin>>rno;

        cin.get();
        cout<<"Enter the Name:";
        //cin>>name;    // only single name is accept;
        cin.get(name,50); // Use for multi worde print 
        cout<<"Enter the per:";
        cin>>per;
    }
    void show()
    {
       cout<<"INFORMATION"<<endl;
       cout<<"------------------------------"<<endl;
       cout<<rno<<" "<<name<<" "<<per<<endl;

    }
};

int main()
{
    student ob;

    ob.accept();
    ob.show();
}