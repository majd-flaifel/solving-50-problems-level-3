

#include <iostream>
using namespace std;
int main()
{
	int num;
	bool isprime=true;//true means prime
	cout << "enter any number and i will tell you if it is a prime number or not: ";
	cin >> num;
	while (num <= 1) {
		cout << "number must be greater than 1, please enter again:\n";
		cin >> num;
	}
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			isprime = false;
			break;}
		}

		if (isprime) 
			cout << "prime\n";
		else
			cout << "not prime\n";

	



	}



