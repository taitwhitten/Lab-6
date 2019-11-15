/*
	Tait Whitten
	C++ Fall 2019
	Due: 11/14/2019
	Lab 6: Binary to Decimal Conversion
	Design a program that reads binary numbers from a database file and outputs the binary number and its decimal equivalent. The program
	should be able to handle invalid inputs, communicating that the input was bad and continuing through the program.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	unsigned int in;
	int x;

	ifstream inFile;
	inFile.open("C:/Users/WHITTEN1/Desktop/Lab 6/Lab6/BinaryIn.txt");


	if (!inFile)
	{
		cout << "Can't find file!" << endl;

		return 1;
	}

	inFile >> in;
	
	while (inFile)
	{
		if (unsigned int in = 1)
			int x = x * 2 + 1;
		else if (int in = 0)
			int x = x * 2;
		else
			cout << "Bad digit on input" << endl;
	}
	
	return 0;
}