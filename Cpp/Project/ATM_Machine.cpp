#include<iostream>
#include<string>
using namespace std;

class ATM 
{
    private:                                        
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

    public:
    ATM(long int account_No, string name, int PIN, double balance, string mobile_No) 
    {
        this->account_No = account_No;  
        this->name = name;
        this->PIN = PIN;
        this->balance = balance;
        this->mobile_No = mobile_No;
    }

    long int getAccountNo()
    {
        return account_No;
    }

    string getName()
    {
        return name;
    }

    int getPIN()
    {
        return PIN;
    }

    double getBalance()
    {
        return balance;
    }

    string getMobileNo() 
    {
        return mobile_No;
    }

    void setMobile(string mob_prev, string mob_new) 
    {
        if (mob_prev == mobile_No)
        {
            mobile_No = mob_new;
            cout << "Sucessfully Updated Mobile no." << endl;
        }
         else 
        {
            cout << "Incorrect !!! Old Mobile no" << endl;
        }
    }

    void cashWithdraw(int amount_a) 
    {
        if (amount_a > 0 && amount_a < balance) 
        {
            balance = balance-amount_a;
            cout << "Please Collect Your Cash" << endl;
            cout << "Available Balance: " << balance << endl;
        } 
        else 
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void cashDeposit(int deposit) 
    {
        balance =balance+ deposit;
        cout << "Amount deposited to your account Successfully" << endl;
        cout << "Available Balance: " << balance << endl;
    }

    ~ATM()
     {
        cout << "Destroy memory of object of class ATM " << endl;
    }
};

class Operation
{
    public:
    void performOperations(ATM& user) 
    {
        while (true) 
        {
            int choice;
            int amount ;
            int deposit;
            string oldMobileNo;
            string newMobileNo;

            cout << "\n*---------------Choose the operation you want to perform---------------*\n" << endl;
            cout << "\t1. Check balance"      << endl;
            cout << "\t2. Cash withdraw"      << endl;
            cout << "\t3. Deposit"            << endl;
            cout << "\t4. Show User Details"  << endl;
            cout << "\t5. Update Mobile no."  << endl;
            cout << "\t0. Exit"               << endl;

            cout << "Enter the Option : ";
            cin >> choice;

            switch (choice) 
            {
                case 1:
                    cout << "Your Bank balance is: " << user.getBalance() << endl;
                    break;

                case 2:
                    cout << "Enter the amount: ";
                    cin >> amount;
                    user.cashWithdraw(amount);
                    break;

                case 3:
                    cout << "Enter the Amount you want to deposit: ";
                    cin >> deposit;
                    user.cashDeposit(deposit);
                    break;

                case 4:
                    cout << "User Details are: " << endl;
                    cout << "-> Account no: " << user.getAccountNo() << endl;
                    cout << "-> Name: " << user.getName() << endl;
                    cout << "-> Balance: " << user.getBalance() << endl;
                    cout << "-> Mobile No: " << user.getMobileNo() << endl;
                    break;

                case 5:
                    cout << "Enter Old Mobile No: ";
                    cin >> oldMobileNo;
                    cout << "Enter New Mobile No: ";
                    cin >> newMobileNo;
                    user.setMobile(oldMobileNo, newMobileNo);
                    break;

                case 0:
                    cout << "\n*-----------PLEASE COLLECT YOUR CARD-----------*" << endl;
                    exit(0);
                    return;

                default:
                    cout << "\nInvalid option !!!" << endl;
            }
        }
    }
};

int main() 
{
    int enterPIN;
    long int enterAccountNo;

    ATM user1(1234567, "pradeep jadhav", 1111, 45000.90, "8080501292");
    ATM user2(987654, "Harshal daud", 8080, 120000, "8830203685");
    ATM user3(1357911, "Pravin lengare", 9090, 15000, "8208793266");
    ATM user4(246810,"Saish patil",1212,1000,"9851511212");
    
    Operation ob;

    cout << "\n*------------------------------*WELCOME TO ATM------------------------------" << endl;

    cout << "\nEnter Your Account No : ";
    cin >> enterAccountNo;

    cout << "\nEnter PIN : ";
    cin >> enterPIN;

    if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN())) 
    {
        
       ob.performOperations(user1);
    }
     else if ((enterAccountNo == user2.getAccountNo()) && (enterPIN == user2.getPIN())) 
    {
             
        ob.performOperations(user2);
    }
         else if ((enterAccountNo == user3.getAccountNo()) && (enterPIN == user3.getPIN()))
    {
        
        ob.performOperations(user3);
    }
    else if ((enterAccountNo == user4.getAccountNo()) && (enterPIN == user4.getPIN()))
    {
        ob.performOperations(user4);
     
    }
    else
    {
        cout << "\nUser Details are Invalid !!! " << endl;
        cout << "Please try again !!!" << endl;
    }

    return 0;
}