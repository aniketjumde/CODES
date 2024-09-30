/* verstion 3 using array concept */
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
    cout<<"Enter the name:";
    getline(cin,name);

    cout<<"Enter the percentage:";
    cin>>per;
   }
   void display()
   {
    cout<<rno<<" "<<name<<" "<<per<<endl;
   }

};

int main()
{
    int n;
    cout<<"How many appeard ? :";
    cin>>n;

    if(n<=0)
    {
        cout<<"Input invalid"<<endl;
        exit(0);
    }

    student ob[n];

    for(int i=0;i<n;i++)
    {
        ob[i].accept();
    }

    cout<<"INFORMATION"<<endl;
    cout<<"---------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
        ob[i].display();
    }

    return 0;

}