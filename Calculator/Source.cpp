#include <iostream>
#include <string>

using namespace std;

int getFirstNumber();
int getSecondNumber()

int main() {
	
	/*int num1; //First number
	int num2; //Second number
	char operation; //Operator
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << endl;*/
	cout << getFirstNumber();



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

int getSecondNumber() {
	int num2;
	cout << "Enter second number: ";
	cin >> num2;
	cout << endl;
	return num2;
}

char getOperator() {
	char operation;
	cout << "Enter operator: ";
	cin >> operation;
	cout << endl;
	return operation;
}
