#include<iostream>
using namespace std;

class ABC
{
    private:
    int i;
    float f;

    public:
    ABC(int x=0,float y=0.0)
    {
        i=x;
        f=y;
    }

    void display()
    {
        cout<<"i :"<<i<<endl;
        cout<<"f :"<<f<<endl;

    }

    ABC operator + (ABC &sob)
    {
        ABC tob;
        tob.i=i+sob.i;
        tob.f=f+sob.f;
        return tob;
    }
    friend ABC operator - (ABC &fob,ABC &sob);
    friend ABC operator - (int b ,ABC &tob);
    
    ABC operator +(int a)
    {
        ABC tob;
        tob.i=i+a;
        tob.f=f+a;

        return tob;
    }
    
    ABC operator ++(int)
    {
        ABC temp;
        temp.i=i++;
        temp.f=f++;

        return temp;
    }
    ABC operator ++()
    {
        ABC tob;
        tob.i=++i;
        tob.f=++f;
        return tob;
    }
    friend istream operator >>(istream &in,ABC &fob);
    friend ostream operator <<(ostream &out,ABC &fob);

    

};
    ABC operator - (ABC &fob,ABC &sob)
    {
        ABC tob;
        tob.i=fob.i-sob.i;
        tob.f=fob.f-sob.f;
        return tob;

        
    }

    istream operator >>(istream &in,ABC &fob)
    {
        cout<<"Enter the value of i:";
        in>>fob.i;

        cout<<"Enter the value of f:";
        in>>fob.f; 
        

    }

    ostream operator <<(ostream &out,ABC &fob)
    {
        out<<"i :"<<fob.i<<endl;
        out<<"f :"<<fob.f<<endl;
        
    }

    
    



int main()
{
    ABC ob1(2,7.8);
    ABC ob2(3,3.2);
    ABC ob3;
    ob3=ob1+ob2;
    cout<<"Addition of  ob1 and ob2 with member function :"<<endl;
    ob3.display();

    ABC ob4(3,4.3);
    ABC ob5(2,8.9);
    ABC ob6;
    cout<<"Substraction of ob1 and ob2 as Non-Member function:"<<endl;
    ob6=ob4-ob5;
    ob6.display();

    ob6=ob5+2;
    cout<<"Addition of integer as a Member function:"<<endl;
    ob6.display();

    ABC ob7;
    ob7=ob2++;
    cout<<"post Increment"<<endl;
    cout<<"ob7"<<endl;
    ob7.display();
    cout<<"ob2"<<endl;
    ob2.display();

    ABC ob8;
    ob8=++ob1;
    cout<<"pre Increment"<<endl;
    cout<<"Ob8"<<endl;
    ob8.display();
    cout<<"Ob1"<<endl;
    ob1.display();
    

    cout<<"Incersation and exw=eration operator :"<<endl;
    ABC ob;
    cin>>ob;
    cout<<ob;
    
    return 0; 
}    
