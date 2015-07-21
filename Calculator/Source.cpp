#include <iostream>
#include <string>

using namespace std;

int getFirstNumber();
int getSecondNumber();
char getOperator();
char operation;
int num1;
int num2;
int main() {
	
	cout << getFirstNumber() << " " << getOperator() << " " << getSecondNumber() << endl;
	cout << num1 << operation << num2 << endl;



	//TODO add in exception catching
	

	return 0;
}

int getFirstNumber() {
	int num;
	cout << "Enter first number: ";
	cin >> num;
	cout << endl;
	num1 = num;
	return num;
}

int getSecondNumber() {
	int num;
	cout << "Enter second number: ";
	cin >> num;
	cout << endl;
	num2 = num;
	return num;
}

char getOperator() {
	char opr;
	cout << "Enter operator: ";
	cin >> opr;
	cout << endl;
	operation = opr;
	return opr;
}
