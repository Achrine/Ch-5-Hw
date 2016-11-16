//Programmer: Your Name here 
//Assignment: Chapter 5 Programming Challenge 8: Math Tutor 
//Creation Date: Insert Current date here 
//Description: the purpose of this program is to ....
//				create a program to use for tutoring math in four functions. 

//Proprocessor Dinectives 
#include <iostream> 
#include <iomanip> 
using namespace std; 

//The next line of code is hte start of the C++ Program 
int main() {
	//Variable Declaration Statements 
	float num1,
		num2;
	float answer; //Date Type 'float' required for answeres in division 
	int choice; // Data type 'int' used for switch case structure. 

	//Program Control Structure -- Repetition Control
	//Do While loop - post test loop (code for the loop will execute at least once 
	//This one is terminated by a sentinel value of five 
	do
	{
		//Display Menu 
		cout << "\n\n\tMenu\n\n";
		cout << "1. Addition problem\n";
		cout << "2. Subtraction problem\n";
		cout << "3. Multiplication problem\n";
		cout << "4. Division problem=n";
		cout << "5. Quit this program\n\n";
		cout << "Enter you choice (1-5): ";
		cin >> choice;
		//Validate input 
		if (choice < 1 || choice > 5)
		{
			cout << "Enter 1, 2, 3, 4, 5 please.\n\n";
			continue;
		}
		cout.setf(ios::right);
			//Perform the desired operation
		switch (choice)
		{
		case 1: //Addition 
			cout << "Enter a value for number 1: ";
			cin >> num1;
			cout << "Enter a value for number 2: ";
			cin >> num2;
			cout << setw(5) << num1 << endl;
			cout << "+";
			cout << setw(4) << num2 << endl;
			cout << "-----" << endl;
			cout << " ";
			cout << "\nEnter the correct aswer:\n\n";
			cin >> answer;
			if (answer == num1 + num2)
				cout << "\nCongratulations! That's right. \n";
			else {
				cout << "\nSorry, the correct aswer is ";
				cout << (num1 + num2) << endl;
			}
			break;

		case 2: //Subtraction 
			cout << "Enter a Value for number 1: ";
			cin >> num1;
			cout << "Enter a value for number 2: ";
			cin >> num2;
			cout << setw(5) << num1 << endl;
			cout << "-";
			cout << setw(4) << num2 << endl;
			cout << "-----" << endl;
			cout << " ";
			cout << "\nEnter the correct aswer:\n\n";
			cin >> answer;
			if (answer == num1 - num2)
				cout << "\nCongratulations! That's right. \n";
			else {
				cout << "\nSorry, the correct aswer is ";
				cout << (num1 - num2) << endl;
			}
			break;
		case 3: //Multiplication
			cout << "Enter a Value for number 1: ";
			cin >> num1;
			cout << "Enter a value for number 2: ";
			cin >> num2;
			cout << setw(5) << num1 << endl;
			cout << "*";
			cout << setw(4) << num2 << endl;
			cout << "-----" << endl;
			cout << " ";
			cout << "\nEnter the correct aswer:\n\n";
			cin >> answer;
			if (answer == num1 * num2)
				cout << "\nCongratulations! That's right. \n";
			else {
				cout << "\nSorry, the correct aswer is ";
				cout << (num1 * num2) << endl;
			}
			break;
		case 4: //Division 
			cout << "Enter a Value for number 1 (numerator): ";
			cin >> num1;
			cout << "Enter a value for number 2 (denominator): ";
			cin >> num2;
			//Date Validation using a while loop
			while (num2 == 0)
			{
				cout << "\nERROR: Division by Zero is Undefined!\n";
				cout << "Please enter a nonzero value for the denominator.\n";
				cin >> num2;
			} 
			cout << "\nEnter the correct answer:\n\n";
			cout << num1 << "\n" << num2 << "=";
			cin >> answer;
			if (answer == num1 / num2)
				cout << "\nCongratulations! That's right.\n";
			else {
				cout << "\nSorry, the correct answer is ";
				cout << (num1 / num2) << endl;
			}
			break;
		}
	} while (choice != 5); //Expression is tested and program loops if Choice is not equal to 5
	return 0;
}