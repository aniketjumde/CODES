/* Write a program which accepts file name frome user read content of it and count how many
characters lines and Word are in a file */
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int character;
int line;
int word;

int main()
{
    ifstream f;
    char fname[100];
    char ch;

    cout<<"Enter the file name :";
    cin>>fname;

    f.open(fname,ios::in);

    if(! f.is_open())
    {
        cout<<"Invalid file name "<<fname<<endl;
        exit(0);
    }

    character=0;
    line=0;
    word=0;
    while(1)
    {
        ch=f.get();

        if(ch==EOF)
        {
            break;
        }
        character++;

        if(ch==' '|| ch=='\t')
        {
           word++;
        }

        if(ch=='\n')
        {
            word++;
            line++;
            
        }                       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    }
    cout<<"No.of.character :"<<character<<endl;
    cout<<"No.of.Word :"<<word<<endl;
    cout<<"No.of.line :"<<line<<endl;

    f.close();

    return 0;
}