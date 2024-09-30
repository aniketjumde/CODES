/* 1. Write a C++ program that represent a  hotel information. The program should have a class for
 the room which has information items (room_no, floor, price, and customer_name). Let the program
  read  room information from user then show the details on the screen. Use member Functions.*/

  #include<iostream>
  #include<string>
  using namespace std;

  class Room
  {
    int room_no;
    int floor;
    float price;
    string customer_name;

    public:

    /* Room()
    {
        this->room_no=room_no;
        this->floor=floor;
        this->price=price;
        this->customer_name=customer_name;
    } */

    void accept()
    {
       
    cout<<"Enter the room number :";
    cin>>room_no;

    cout<<"Enter the floor :";
    cin>>floor;

    cout<<"Enter the price of room :";
    cin>>price;

    cin.get();

    cout<<"Enter customer name :";

    //cin>>customer_name;
     getline(cin,customer_name);

    }

    void display()
    {
        cout<<"Room No       :"<<room_no<<endl;
        cout<<"Floor         :"<<floor<<endl;
        cout<<"price         :"<<price<<endl;
        cout<<"Customer Name :"<<customer_name<<endl;

    }

    
  };

  int main()
  {
    int n;
    cout<<"How many Room is availabel :";
    cin>>n;

    Room ob[n];

    for(int i=1;i<=n;i++)
    {
        ob[i].accept();
       
    }

    cout<<"------------------------------HOTEL INFORMATION----------------------------------------"<<endl;
    for(int i=1;i<=n;i++)
    {
        ob[i].display();

    }
    cout<<"--------------------------------Thank you----------------------------------------------"<<endl;


     
    return 0;
  }