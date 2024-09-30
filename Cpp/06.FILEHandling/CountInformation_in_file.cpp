/* Write a program which accepts file name from user ,read content of it and count how many alphabets,
digits,And spacial characterb are there in file */

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	ifstream fin;
	char fname[100];
	char ch;
	int count_alphabet;
	int count_digit;
	int count_character;

	cout<<"Enter file name :";
	cin>>fname;

	fin.open(fname,ios::in);

	if(! fin.is_open())
	{
		cout<<"Invalid file Name :"<<fname<<endl;
		exit(0);
	}
	
	count_alphabet=0;
	count_digit=0;
	count_character=0;
	while(1)
	{
		ch=fin.get();

		if(ch==EOF)
		{
			break;
		}

		if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
		{
			count_alphabet++;
		}
		else if(ch>='0' && ch<='9')
		{
			count_digit++;
		}
		else
		{
			count_character++;
		}
	}

	cout<<"No.of.Alphabet :"<<count_alphabet<<endl;
	cout<<"No.of.Digit :"<<count_digit<<endl;
	cout<<"No.of.Character :"<<count_character<<endl;

	fin.close();

	return 0;


}