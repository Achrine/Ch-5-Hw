//Programmer: Steven
//Assignment: Program Challenge
//			  Chapter 5, Number 5
//Filename: CH05_05.cpp
//Creation Date: 11/17/16
//Assignment: Problem name. Membership Fees Increase
//Description: 
/*
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
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
	int count = 0, year = 0; //count to keep track of minutes, and minutes to tell us where we are.
	double fee = 2500, inc = 0.04; //for calculations. 


	cout << setw(15) << left << "Year" << setw(1) << "|" << setw(15) << left << "Fees" << setw(1) << endl;
	cout << setw(5) << left << "---------------" << setw(1) << "|" << setw(15) << left << "---------------" << setw(1) << endl;
	for (count = 1; count <= 6; ++count)
	{
		double feeInc = (fee + (fee * inc));
		//if (count % 5 == 0) //if count is divisible by 5
			cout << setw(15) << left << count << setw(1) << "|" << setw(15) << left << (((inc * count) * fee) + fee ) << setw(1) << endl; //inc * count increases the fee inc as needed. 
		year++;
		
	}

	return 0; //We return zero to the main function. 
}