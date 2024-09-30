/* Vehicle Class (Base Class):
Data:
Vehicle ID (unique identifier for each vehicle)
Manufacturer (string representing the manufacturer of the vehicle)
Year (integer representing the year the vehicle was manufactured)
Member Functions:
Constructor(s) to initialize the data members
Virtual function displayDetails() to display the details of the vehicle (to be overridden in derived classes)
Virtual destructor (since you'll be dealing with polymorphism and dynamic memory allocation)


Car Class (Derived from Vehicle):

Data (in addition to inherited data):
Model (string representing the model of the car)
Color (string representing the color of the car)
Member Functions:
Constructor(s) to initialize the data members, including those inherited from the base class
Overridden displayDetails() function to display the details specific to a car
Truck Class (Derived from Vehicle):

Data (in addition to inherited data):
Capacity (floating-point number representing the carrying capacity of the truck)
TransmissionType (string representing the type of transmission of the truck)
Member Functions:
Constructor(s) to initialize the data members, including those inherited from the base class
Overridden displayDetails() function to display the details specific to a truck
FleetManager Class:
*/

#include<iostream>
using namespace std;

class Vehicale
{
    protected:
    int vehicale_id;
    string manufacture_by_vehicale;
    int year;

    public:
    Vehicale(int vehicale_id=0,string manufacture_by_vehicale="\0",int year=0)
    {
        this->vehicale_id=vehicale_id;
        this->manufacture_by_vehicale=manufacture_by_vehicale;
        this->year=year;
    }

     void displayDetails() 
    {
        cout<<"Vehical id              :"<<vehicale_id<<endl;
        cout<<"Manufacture by vehicale :"<<manufacture_by_vehicale<<endl;
        cout<<"Year                    :"<<year<<endl;
    }
    virtual ~Vehicale()
    {
        cout<<"I am destructer in vehicale :"<<endl;
    }
};

class Car: public Vehicale
{
    private:
    string Model;
    string colour;

    public:
    Car(int vehicale_id=0,string manufacture_by_vehicale="\0",int year=0,string Mode="\0",string colour="\0"):Vehicale( vehicale_id, manufacture_by_vehicale, year),Model(Model),colour(colour)
    {}

    void displayDetails()
    {
        Vehicale::displayDetails();
        cout<<"Model                        : "<<Model<<endl;
        cout<<"Colour                       :"<<colour<<endl;
    }
    ~Car()
    {
        cout<<"I am destructer in car "<<endl;
    }
};

class Truck : public Vehicale
{
    private:
    float capacity ;
    string TransmissionType;

    public:
    Truck(int vehicale_id=0,string manufacture_by_vehicale="\0",int year=0,float capacity=0.0,string TransmissionType="\0"):Vehicale(vehicale_id,manufacture_by_vehicale,year),capacity(capacity),TransmissionType(TransmissionType)
    {}

    void displayDetails()
    {
        Vehicale ::displayDetails();
        cout<<"Capacity                       :"<<capacity<<endl;
        cout<<"Transmistion Type              :"<<TransmissionType<<endl;
    }
    ~Truck()
    {
        cout<<"I am destructer in Truck "<<endl;
    }

};

int main()
{
    Car C(1001,"Forutner",1987,"2CC","Black");
   // cout<<"--------------------Car Information----------------------------"<<endl;
    C.displayDetails();

    Truck t(907,"Thar",2024,4.8,"Automatic");
   // cout<<"--------------------Truck Information---------------------------"<<endl;
    t.displayDetails();

    return 0;
}
