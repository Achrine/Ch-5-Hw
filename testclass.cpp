#include <iostream>
#include <io.h>
#include <string>

using namespace std;

class Test
{
private:
	int data1;
	float data2;

public:
	void function1()
	{
		data1 = 2;
		//return data1;
	}

	float function2()
	{
		data2 = 3.5;
		return data2;
	}
};

class Dog {
private: 
	string name = "spot";

public: 
	string color = "black";
	string speakName = name;
	string jump(void) {
		string action = "jump";

		return action;
	}
};

int main() {
	Test objectVariableName;
	Test o1, o2;

	//cout << o1.function1 << endl;
	cout << o2.function2() << endl;
	
	Dog one;
	cout << one.color << endl;
	cout << one.jump() << endl;
	cout << one.speakName << endl;

	return 0;
}
