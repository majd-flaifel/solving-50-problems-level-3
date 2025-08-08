

#include <iostream>
using namespace std;
//method1: by using while loop: 
int main()
{
	/*float num;
	float sum = 0;
	cout << "enter any number exept -99: ";
	cin >> num;
	while (num != -99) {
		sum = sum + num;
		cout << "keep entering numbers and i will give you the sum of them: ";
		cin >> num;}
	cout << "sum= " << sum << endl;*/

	//method2: by using do while loop: 
	float num;
	float sum = 0;
	do {
		cout << "Enter a number (-99 to stop): ";
		cin >> num;

		if (num != -99)
			sum += num;

	} while (num != -99);

	cout << "Total sum = " << sum << endl;
}


