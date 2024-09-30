/* Write a menu driven c++ program to create a  FUNCTION template
    b) To  find minimum of two numbers  */

  
#include<iostream>
using namespace std;

template<class t>
int Minimum(t &a,t &b)
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
        cout << "1. Find Minimum of two integers\n";
        cout << "2. Find Minimum of two floating-point numbers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int num1, num2;
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "Minimum of " << num1 << " and " << num2 << " is: " << Minimum(num1, num2) << endl;
                break;
            }   
            case 2: {
                float num1, num2;
                cout << "Enter two floating-point numbers: ";
                cin >> num1 >> num2;
                cout << "Minimum of " << num1 << " and " << num2 << " is: " << Minimum(num1, num2) << endl;
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
