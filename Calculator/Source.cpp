#include <iostream>
#include <string>

using namespace std;

int getFirstNumber();

int main() {
	
	/*int num1; //First number
	int num2; //Second number
	char operation; //Operator
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << endl;*/

	getFirstNumber();

	//TODO add in exception catching
	

	return 0;
}

int getFirstNumber() {
	int num1;
	cout << "Enter first number: ";
	cin >> num1;
	cout << endl;
	return num1;
}

