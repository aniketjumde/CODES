#include<iostream>
#include<fstream>
#include<ostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    ifstream fr; //read file 
    ofstream fw; //Write file
    string frname;
    string fwname;
    string line;
    char ch;

    cout<<"Enter the name of read file :";
    cin>>frname;

    fr.open(frname,ios::in);

    if(! fr.is_open())
    {
        cout<<"Invalid files name "<<frname<<endl;
        exit(0);
    }

    cout<<"Enter the name of write file :";
    cin>>fwname;

    fw.open(fwname,ios::out);

    if(! fw.is_open())
    {
        cout<<"Invalid file name "<<fwname<<endl;
        exit(0);
    }

    while(getline(fr,line))
    {
       fw<<line<<endl;
    }
    fr.close();
    fw.close();

    return 0;    

}