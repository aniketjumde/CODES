/* Write a menu driven c++ program to create a MEMBER FUNCTION template to subtract two 
numbers. */

#include<iostream>
using namespace std;

template<class T>
class Substractoin
{
    private:
    T num1;
    T num2;
    
    public:
    Substractoin(T x,T y)
    {
        num1=x;
        num2=y;
    }
    int Substraction_of_number()
    {
        T sub;
        sub = num1 - num2 ;
        return sub;
    }
};

int main()
{
    int choice;
   

    do{

        cout<<"=================== Choice a option ======================="<<endl;
        cout<<" 1.Multiplication of two integer number "<<endl;
        cout<<" 2.Multiplication of two float number "<<endl; 
        cout<<" 3.Exit the program."<<endl;
        cout<<"Enter the choice :";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                    {
                        int num1,num2;
                        cout<<"Enter the first number :";
                        cin>>num1;
                        cout<<"Enter the second number :";
                        cin>>num2;
                        Substractoin <int>subint(num1,num2);
                        cout<<"Substraction of two interger : "<<subint.Substraction_of_number()<<endl;
                        break;
                    }

            case 2 :        
                    {
                        float num1,num2;
                        cout<<"Enter the first number :";
                        cin>>num1;
                        cout<<"Enter the second number :";
                        cin>>num2;
                        Substractoin <float>subfloat(num1,num2);
                        cout<<"Substracton of two float : "<<subfloat.Substraction_of_number()<<endl;
                        break;
                    }

            case 3 :
                        cout<<"Exite program "<<endl;
                        break;     

            default:
                        cout<<"Invalid choice...!"<<endl;
                        cout<<"Enter the correct choice."<<endl;

        }


    }while(choice !=3);

    return 0;
}


  