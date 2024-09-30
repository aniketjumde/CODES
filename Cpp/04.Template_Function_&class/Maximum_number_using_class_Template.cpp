/* Write a menu driven c++ program to create   CLASS template  
    a) To  find maximum of two numbers  
        b)To  find minimum of two numbers 
*/

#include<iostream>
using namespace std;

template<class t>
class MaximumNumber
{
    t num1;
    t num2;
    t ans;

    public:

    MaximumNumber(t x,t y):num1(x),num2(y) {}

    void calculateMaximum_Number()
    {
        ans= num1 > num2 ? num1 : num2 ;

        cout<<"Maximum number is : "<<ans<<endl;
    }
    
    void calculateMinimum_Number()
    {
        ans= num1 < num2 ? num1 : num2 ;

        cout<<"Maximum number is : "<<ans<<endl;
    }
    ~MaximumNumber()
    {
        cout<<"Destroy the object memory !!"<<endl;
    }

};

int main()
{
   int choise;

   do{

    cout<<"====================== Which option you want to choise ======================="<<endl;
    cout<<" 1. Find Maximum number of Two integer ."<<endl;
    cout<<" 2. Find Maximum number of Two float ."<<endl;
    cout<<" 3. Find Minimum number of Two integer ."<<endl;
    cout<<" 4. Find Minimum number of Two float ."<<endl;
    cout<<" 5. Exit from program ."<<endl;
    cout<<"Enter the choice : "<<endl;
    cin>>choise;

    switch(choise)
    {
        case 1:
                {
                 int num1,num2;
                 cout<<"Enter first number :";
                 cin>>num1;
                 cout<<"Enter second number :";
                 cin>>num2;
                 MaximumNumber <int>max(num1,num2);
                 max.calculateMaximum_Number();
                 break;
                }

        case 2:
                { 
                 float num1,num2;
                 cout<<"Enter first number :";
                 cin>>num1;
                 cout<<"Enter second number :";
                 cin>>num2;
                 MaximumNumber <float>max(num1,num2);
                 max.calculateMaximum_Number();
                 break;  
                }        

        case 3:
                {
                 int num1,num2;
                 cout<<"Enter first number :";
                 cin>>num1;
                 cout<<"Enter second number :";
                 cin>>num2;
                 MaximumNumber <int>min(num1,num2);
                 min.calculateMinimum_Number();
                 break;
                }

        case 4:
                {
                 float num1,num2;
                 cout<<"Enter first number :";
                 cin>>num1;
                 cout<<"Enter second number :";
                 cin>>num2;
                 MaximumNumber <float>min(num1,num2);
                 min.calculateMinimum_Number();
                 break;
                }

        case 5:
                 cout<<"Exit program!!!"<<endl;
                 break;

        default :
                 cout<<"Invalid Optio...!"<<endl;
                 cout<<"Please choise correct option!"<<endl;                                    
    }

   }while(choise !=5);

    return 0;

}