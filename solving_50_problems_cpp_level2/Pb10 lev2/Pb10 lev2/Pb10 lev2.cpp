
#include <iostream>
using namespace std;
int main()
{
	int mark1, mark2, mark3;
	cout << "please enter 3 marks:\n";
	cin >> mark1 >> mark2 >> mark3;
	float avg = (mark1 + mark2 + mark3) / 3;
	cout << "avg = " << avg;
}
