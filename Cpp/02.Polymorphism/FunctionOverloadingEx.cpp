/* Implement a class printData with three member functions.
   All with the same name "print"

   void print( int ): prints int value
   void print(int,int):it prints [11,22]
   void print(char *): "TCA"

*/


#include<iostream>
using namespace std;

class PrintData
{
   public:
   void print(int &a)
   {
      cout<<"int Value is :"<<a<<endl;

   }
   void print(int &x,int &y)
   {
      cout<<"["<<x<<","<<y<<"]"<<endl;
   }
   void print(char *p)
   {
      cout<<"\""<<p<<"\""<<endl;
   }


};

int main()
{
   PrintData ob;
   int a;
   cout<<"Enter the value of a:";
   cin>>a;
 

   int x,y;
   cout<<"Enter the value of X & Y :";
   cin>>x>>y;

   ob.print(a);

   ob.print(x,y);

   ob.print("An");

}