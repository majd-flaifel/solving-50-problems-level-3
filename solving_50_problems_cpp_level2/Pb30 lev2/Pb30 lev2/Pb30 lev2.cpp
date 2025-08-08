

#include <iostream>
using namespace std;
int main()
{
	int n, factorial = 1;
	cout << "enter a +ve number and i will give you the factorial of it: ";
	cin >> n;
	while (n <= 0) {
		cout << "rejected,please enter a +ve number again: ";
		cin >> n;
	}
	for (int i = n; i >= 1; i--) {
		factorial = factorial * i;
	}
	cout << "factorial of " << n << " is: " << factorial << endl;
	



}

