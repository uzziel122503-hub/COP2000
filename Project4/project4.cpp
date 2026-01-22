//Aaron Roldan-Martinez
//COP2000.0T3
//Write a C++ program that will read a file of student names.  
// Your program should find the file in the current directory of your project. The file name should be students.txt

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	//program code goes here
	ifstream myinputfile;
	string name;
	int counter = 0;
	int len = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0;

	//open the file
	myinputfile.open("Students.txt");

	if (!myinputfile) //could not open
	{
		cout << "error opening file" << endl;
	}
	
	cout << "Reading file\n\n";

	//loop until eof is found
	while (myinputfile >> name)
	{
		cout << name << endl;
		counter++;
		len = name.length();
		if (len == 3)
			three++;
		else if (len == 4)
			four++;
		else if (len == 5)
			five++;
		else if (len == 6)
			six++;
		else if (len == 7)
			seven++;
		else if (len == 8)
			eight++;
			;
	}
	cout << "\nFinished reading records\n";
	cout << "There are " << counter << " records\n";
	cout << "There were " << three << " names with 3 characters\n";
	cout << "There were " << four << " names with 4 characters\n";
	cout << "There were " << five << " names with 5 characters\n";
	cout << "There were " << six << " names with 6 characters\n";
	cout << "There were " << seven << " names with 7 characters\n";
	cout << "There were " << eight << " names with 8 characters\n";
	//close the file
	myinputfile.close();

	system("pause");
	return 0;

}