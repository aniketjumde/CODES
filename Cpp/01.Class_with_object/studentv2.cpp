/* verstion two using string concept */
#include<iostream>
#include<string>
using namespace std;

class student 
{
    private:
    int rno;
    string name;
    float per;
    public:
    void accept()
    {
        cout<<"Enter the roll number:";
        cin>>rno;

        cin.get();
        cout<<"Enter the Name:";
        //cin>>name;    // only single name is accept;
        getline(cin,name); // Use for multi worde print 
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