/* Write a program which accepts file name frome user read content of it and count how many vowels
 are there in file */

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	ifstream fin; // ifstream is used in read the file
	char fname[100],ch;
	int vowels_count;

	cout<<"Enter file name :";
	cin>>fname;

	fin.open(fname,ios::in);//ios::in is used read the file

	if(! fin.is_open())
	{
		cout<<"Invalid file name "<<fname<<endl;
		exit(0);
	}

	vowels_count=0;
	while(1)
	{
		ch=fin.get();

		if(ch==EOF)
		{
			break;
		}

		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u')
		{
			vowels_count++;

		}
	}

	cout<<"No of Vowels :"<<vowels_count<<endl;
	fin.close();

	return 0;

}