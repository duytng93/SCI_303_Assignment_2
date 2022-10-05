#include <iostream>
#include <fstream>
#include "functions.h"


using namespace std;
int read_int(const string& prompt);				//declare function for taking and testing input of interger from user
int main()
{
	//int numberToBeCheck, numberToBeCheck2;		// variable for user input in question 1
	int index, newNumber;						// variables for user input in question 2
	int newNumber2;								// variable for user input in question 3
	int index2;									// variable for user input in question 4
	ifstream inputFile;
	int* array;
	int size = 0;								// size is initialized to 0 in order to perform couting

	inputFile.open("File.txt");
	if (!inputFile)								// test if file is available
	{
		cout << "file not found!" << endl;
	}

	int read;									// a varible for the counting process

	while (!inputFile.eof())					//read file to determine the size of array
	{
		inputFile >> read;
		size++;
	}
	array = new int[size];						// creat array with the appropirate size
	inputFile.close();

	inputFile.open("File.txt");					// read the file to input integers to the array
	while (!inputFile.eof())
	{
		for (int i = 0; i < size; i++)
		{
			inputFile >> array[i];

		}
	}
	inputFile.close();

	cout << endl;
	/*
	cout << "Enter a number to be checked: ";
	cin >> numberToBeCheck;
	check(array, size, numberToBeCheck);
	cout << endl;
	cout << "====================" << endl << endl;

	cout << "Enter a number to be checked: ";
	cin >> numberToBeCheck2;
	check(array, size, numberToBeCheck2);
	cout << endl;
	cout << "====================" << endl << endl;
	*/
	


	while (true) {										//try catch block for taking index input
		index = read_int("Enter the index of the number to be modified: ");
		try {
			if (index < 0 || index >= size) {			// test if the entered index is in range
				throw std::out_of_range("");
			}
			break;
		}
		catch (std::out_of_range) {
			std::cerr << "The chosen index number is out of range. Please try again!" <<endl<<endl;
			cout << "====================" << endl << endl;
		}
	}
	
	newNumber = read_int("Enter the new number: ");		// read value for new number, definition of this function is at the bottom of this file

	modify(array, size, index, newNumber);				// A function that can modify the value of an integer when called
	cout << endl;										// with the index of the integer in the array
														// and return the new value and old value back to the user.


	cout << "====================" << endl << endl;



	newNumber2 = read_int("Enter a number to add to the array: ");		// read value for new number, definition of this function is at the bottom of this file
	addnewNumber(array, size, newNumber2);				//    A function that adds a new integer 
	cout << endl;										//    to the end of the array.



	cout << "====================" << endl << endl;

	/*
	cout << "Enter the number index to be removed: ";
	cin >> index2;
	removeNumber(array, size, index2);

	cout << endl;
	*/

	cout << "Program ends!" << endl;
	delete[] array;
	system("pause");
	return 0;
}

int read_int(const string& prompt)					// definition for read_int function
{
	cin.exceptions(ios_base::failbit);
	int num = 0;
	while (true) {
		try {										// try catch block for interger input
			cout << prompt;	
			cin >> num;
			return num;
		}
		catch (ios_base::failure& ex) {
			cout << "Entered input is not an integer! Please try again!"<<endl<<endl;
			cout << "====================" << endl << endl;
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
}
