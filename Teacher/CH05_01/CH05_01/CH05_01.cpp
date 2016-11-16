//Programmer: Steven
//Assignment: Program Challenge
//			  Chapter 5, Number 1
//Filename: CH05_01.cpp
//Creation Date: 11/15/16
//Assignment: Sum of Numbers .
//Description: Write a proram that asksthe user to enter two numbers. 

//Preprocessor Directive
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std; 

int main() {
	//variable definition statements 
	int num; // number the user enters 
	int total = 0; //Accumulator //initialize the accumulator to 0

	//Input - Using Prompt and Respnose and input validation 
	//Get a positive integer from the user. 
	cout << "Enter a positive integer number: ";
	cin >> num; 

	//Validate the number 
	while (num < 0) {
		cout << "Please enter a positive non-zero number: "
			<< endl; 
		cin >> num; 
	}

	//Processing - Using a for loop 
	//The following loop calculates the total of all 
	//The numbers from 0 through num. When the loop is 
	//finished, total will contain the total value. 
	for (int count = 1; count <= num; count++)
		total += count;

	//Output 
	//Display the total. 
	cout << "\nThe total of all the integers from 1 to " << num << " is " << total << ".\n\n";
	return 0;
}