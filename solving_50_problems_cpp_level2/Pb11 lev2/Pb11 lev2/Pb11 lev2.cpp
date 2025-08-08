

#include <iostream>
using namespace std;
int main()
{
	float mark1,mark2,mark3;
	cout << "enter mark1: ";
	cin >> mark1;
	cout << "enter mark2: ";
	cin >> mark2;
	cout << "enter mark3: ";
	cin >> mark3;
	float avg = (mark1 + mark2 + mark3) / 3;
	if (avg >= 50)
		cout << "Pass\n";
	else cout << "Fail\n";
}
