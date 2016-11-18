//Programmer: Steven Brcak
//Assignment: Program Challenge
//			  Chapter 5, Number 2
//Filename: CH05_02.cpp
//Creation Date: 11/17/16
//Assignment: Characters for the ASCII Codes.
//Description: 
/*
Write a program that uses a loop to display the characters for the ASCII codes 0
through 127. Display 16 characters on each line.
*/

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	unsigned char a = 0; //define a variable with a character that is unsigned
	int count; //count where we are in the 128
	for (count = 0; count < 128; ++count) //applying a number to a char variable sets ASCII, and we add to it. 
	{
		if (count % 16 == 0) //if count is divisible by 16
			cout << endl; //output newline
		
			cout << a << "  "; //then print all of what a is, and it should match count
			a++; //as a increases in value it outputs the ASCII for that value.
			//keeping the count ensures that on every 16th character, we new line. 
	}
	
	return 0;

}