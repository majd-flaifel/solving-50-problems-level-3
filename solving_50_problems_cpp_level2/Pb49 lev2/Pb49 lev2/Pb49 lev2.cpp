

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int PIN_code;
	int balance = 7500;
	cout << "enter PIN_code: ";
	cin >> PIN_code;
	if (PIN_code == 1234)
		cout << "balance is: " << balance << endl;
	else
		cout << "wrong password\n";
}

