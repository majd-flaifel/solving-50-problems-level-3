

#include <iostream>
using namespace std;
int main()
{
/*	int num;
	cout << "enter number greater than 1: ";
	cin >> num;
	int sum = 0;
		for (int i = 1; i <= num; i++) {
			if (i % 2 != 0)
				sum = sum + i;
		}
	cout << "sum= " << sum << endl;*/

	// another method using while loop:
	int num;
	int counter = 1;
	cout << "enter number greater than 1: ";
	cin >> num;
	int sum = 0;
	while (counter <= num) {
		if(counter%2!=0)
		sum = sum + counter;
		counter++;
}
	cout << "sum= " << sum << endl;




}
