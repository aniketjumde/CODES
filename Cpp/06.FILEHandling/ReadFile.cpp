/*   Write a program which accept file name from user and read content of it 
& display on moniter    */

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    ifstream fin;
    char fname[100];
    char ch;
    cout<<"Enter the name of file :";
    cin>>fname;

    fin.open(fname,ios::in);

    if(! fin.is_open())
    {
        cout<<"Invalid file name !"<<endl;
        exit(0);
    }

    cout<<"File content are :"<<endl;

    while(1)
    {
        
        ch=fin.get                                                                                           ();
        if(ch==EOF)
        {
            break;
        }
        cout<<ch;
    }
    fin.close();
    return 0;
}
