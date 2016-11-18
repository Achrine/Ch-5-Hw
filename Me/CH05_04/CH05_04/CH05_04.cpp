//Programmer: Steven
//Assignment: Program Challenge
//			  Chapter 5, Number 4
//Filename: CH05_04.cpp
//Creation Date: 11/17/16
//Assignment: Problem name. Calories burned
//Description: 
/*
Running on a particular treadmill you burn 3.9 calories per minute. Write a program
that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30
minutes.
*/

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
#include <iomanip>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	int count = 0, minutes = 0; //count to keep track of minutes, and minutes to tell us where we are.
	double calorieBurn = 3.9; //for calculations. 
	
	
	cout << setw(15) << left << "Minutes" << setw(1) << "|" << setw(15) << left << "Calories Burned" << setw(1) << endl;
	cout << setw(5) << left << "---------------" << setw(1) << "|" << setw(15) << left << "---------------" << setw(1) << endl;
	for (count = 0; count < 30; ++count) 
	{
		if (count % 5 == 0) //if count is divisible by 5
		cout << setw(15) << left << minutes << setw(1) << "|" << setw(15) << left <<  (calorieBurn * minutes) << setw(1) << endl; //output newline
		minutes++; 
	}

	return 0; //We return zero to the main function. 
}