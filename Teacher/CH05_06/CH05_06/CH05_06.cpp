//Programmer: Steven Brcak 
//Assignment: Program Challenge
//			  Chapter 5, Number 6
//Filename: CH05_06.cpp
//Creation Date: 11/15/15
//Assignment: Distance Traveled
//Description: 
//
//Preprocessor Directive
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	//Variable Definiton Statements
	//the speed variable will hold the vehicle's speed
	double speed;

	//The maxHours variable will hold the total number of hours the vehicle traveled. 
	double maxHours;

	//Input -- Using Prompt and Response and Input Validation
	//Get the vehicle's speed from the user. 
	cout << "What is the speed of the vehicle in mph?";
	cin >> speed;

	//Validate that speed is not negative
	while (speed < 0)
	{
		cout << "Please enter a non-negative number for speed: ";
		cin >> speed;
	}
	//Get the hours traveled. 
	cout << "For how many hours has it traveled? ";
	cin >> maxHours;

	//Output -- For table headings 
	//Display the table headings 
	cout << endl << setw(8) << left << "Hour"
		<< "Distance Traveled in Miles\n";
	cout << "-----------------------------------\n";

	//Processing -- Using a for loop
	//display the distance traveled for each hour.
	for (int hour = 1; hour <= maxHours; hour++)
	{
		//Calculate the distace for this many hours. 
		double distance = speed * hour;
		//Output of Results
		//Display the hours and distance. 
		cout << setw(8) << left << hour << (speed * hour) << endl;
	}
	return 0;
}