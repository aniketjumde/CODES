/* Write a menu driven c++ program to create a MEMBER FUNCTION template to multiply two numbers. */

#include<iostream>
using namespace std;

template<class T>
class Multiplication
{
    T num1;
    T num2;
    
    public:
    Multiplication(T x,T y)
    {
        num1=x;
        num2=y;
    }
    int Multiplicatoin_of_number()
    {
        T mul;
        mul = num1 * num2 ;
        return mul;
    }

};

int main()
{
    int choice;
    Multiplication <int>intMultiplication();
    Multiplication <float>floatMultiplication();

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
                        Multiplication <int>intMultiplication(num1,num2);
                        cout<<"Multiplication of two interger : "<<intMultiplication.Multiplicatoin_of_number()<<endl;
                        break;
                    }

            case 2 :        
                    {
                        float num1,num2;
                        cout<<"Enter the first number :";
                        cin>>num1;
                        cout<<"Enter the second number :";
                        cin>>num2;
                        Multiplication <float>floatMultiplication(num1,num2);
                        cout<<"Multiplication of two interger : "<<floatMultiplication.Multiplicatoin_of_number()<<endl;
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