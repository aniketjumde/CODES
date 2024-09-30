/*  Write a menu driven c++ program to create a  FUNCTION template  
a) To  find maximum of two numbers  */


  
#include<iostream>
using namespace std;

template<class t>
int Maximum(t &a,t &b)
{
   int min;
   min= a<b ? a : b ;

   return min;
}

int main() 
{
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Find maximum of two integers\n";
        cout << "2. Find maximum of two floating-point numbers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int num1, num2;
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "Maximum of " << num1 << " and " << num2 << " is: " << Maximum(num1, num2) << endl;
                break;
            }   
            case 2: {
                float num1, num2;
                cout << "Enter two floating-point numbers: ";
                cin >> num1 >> num2;
                cout << "Maximum of " << num1 << " and " << num2 << " is: " << Maximum(num1, num2) << endl;
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    }while(choice != 3);

    return 0;
}
