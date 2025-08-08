

#include <iostream>
using namespace std;
int main()
{
	float pennies, nickels, dimes, quarters, dollars;
	cout << " how many pennies/nickels/dimes/quarters/dollars do you have? \n";
	cout << "pennies: ";
	cin >> pennies;
	cout << "nickels: ";
	cin >> nickels;
	cout <<  "dimes: ";
	cin >> dimes;
	cout << "quarters ";
	cin >> quarters;
	cout << "dollars: ";
	cin >> dollars;

	float total_pennies = pennies + nickels * 5  +  dimes * 10 + quarters * 25  +  dollars * 100 ;
	float total_dollars = total_pennies / 100;
	cout << "total_pennies = " << total_pennies << endl;
	cout << "total_dollars = " << total_dollars << endl;


}


