#include<iostream>
using namespace std;

template<class t>
class Addition
{
   private:
   t a;
   t b;
   t ans;

   public:
   void accept()
   {
      cout<<"Enter the first number :";
      cin>>a;
      cout<<"Enter the second number :";
      cin>>b;
   }

   void calculate()
   {
      ans = a + b ;
   }

   void display()
   {
     cout<<"Sum : "<<ans<<endl;
   }
        
};

int main()
{
    Addition<int>ob1;
    ob1.accept();
    ob1.calculate();
    ob1.display();

    Addition<float>ob2;
    ob2.accept();
    ob2.calculate();
    ob2.display();


    return 0;
}