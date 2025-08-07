
#include <iostream>
using namespace std;
int main()
{
	int age;
	bool drive_license;
	cout << "enter your age: ";
	cin >> age;
	cout << "do you have a drive_license?1/0 ";
	cin >> drive_license;
	if (age > 21 && drive_license)
		cout << "Hired";
	else
		cout << "Rejected";

}

