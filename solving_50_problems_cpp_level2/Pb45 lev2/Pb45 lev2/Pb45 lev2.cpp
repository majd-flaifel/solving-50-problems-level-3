#include <iostream>
using namespace std;
int main()
{
	int month;
	cout << "enter month as a number: ";
	cin >> month;
	while (month > 12 || month < 1) {
		cout << "wrong month please enter month as a number again \n";
		cin >> month;
	}
	switch (month) {
	case 1:cout << "jan\n"; break;
	case 2:cout << "feb\n"; break;
	case 3:cout << "mar\n"; break;
	case 4:cout << "april\n"; break;
	case 5:cout << "may\n"; break;
	case 6:cout << "june\n"; break;
	case 7:cout << "july\n"; break;
	case 8:cout << "aug\n"; break;
	case 9:cout << "sep\n"; break;
	case 10:cout << "oct\n"; break;
	case 11:cout << "nov\n"; break;
	case 12:cout << "dec\n"; break;


	}


}

