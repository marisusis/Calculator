#include <iostream>
#include <string>

using namespace std;

int getFirstNumber();
int getSecondNumber();
char getOperator();
char operation;
int num1;
int num2;
int ans;
int ndivide();
int nmultiply();
int nadd();
int nsubtract();

int main() {
		char cont;
		bool calc = true;
	while (calc){
		getFirstNumber();
		getOperator();
		getSecondNumber();

		cout << num1 << " " << operation << " " << num2 << endl;
		//cout << num1 << operation << num2 << endl;
		if (operation = '+') {
			nadd();
		} else if (operation == '-') {
			nsubtract();
		} else if (operation == '/') {
			ndivide();
		} else if (operation == '*') {
			nmultiply();
		} 
		cout << "Would you like to calculate another equation? (y/n): ";
		cin >> cont;
		cout << endl;
		if (cont == 'y') {

		} else {
			calc = false;
			break;
		}
	}


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
void outn(string s) {
	cout << s << endl;
}

void out(string s) {
	cout << s;
}

int ndivide() {
	ans = num1 / num2;
	string s = to_string(ans);
	out(s);
	return ans;
}

int nmultiply() {
	ans = num1 * num2;
	string s = to_string(ans);
	out(s);
	return ans;
}

int nadd() {
	ans = num1 + num2;
	string s = to_string(ans);
	out(s);
	return ans;
}

int nsubtract() {
	ans = num1 - num2;
	string s = to_string(ans);
	out(s);

	return ans;
}