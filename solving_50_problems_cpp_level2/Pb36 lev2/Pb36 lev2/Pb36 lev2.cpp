// Pb36 lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// by using else if: 
/*void read_num(float& num1, float& num2, char& operation) {
	cout << "enter 2 numbers:\n";
	cin >> num1 >> num2;
		cout << "enter operation type: ";
	cin	>> operation;
}
void print_res(float num1, float num2, char operation) {
	if (operation == '+')
		cout << num1 << "+" << num2 << " = " << num1 + num2;
	else if (operation == '-')
		cout << num1 << "-" << num2 << " = " << num1 - num2;
	else if (operation == '*')
		cout << num1 << "*" << num2 << " = " << num1 * num2;
	else if (operation == '/')
		cout << num1 << "/" << num2 << " = " << num1 / num2;
}*/


int main()
{
	float num1, num2;
	char operation;
/*read_num(num1, num2, operation);
	print_res(num1, num2, operation);*/
	
	//by using switch: 
	cout << "enter 2 numbers:\n";
	cin >> num1 >> num2;
	cout << "enter operation type: ";
	cin >> operation;
	switch (operation) {
	case '+': cout << num1 << "+" << num2 << " = " << num1 + num2; break;
	case'-':		cout << num1 << "-" << num2 << " = " << num1 - num2; break;
	case'*':		cout << num1 << "*" << num2 << " = " << num1 * num2; break;
	case '/':		cout << num1 << "/" << num2 << " = " << num1 / num2; break;

	}

}
