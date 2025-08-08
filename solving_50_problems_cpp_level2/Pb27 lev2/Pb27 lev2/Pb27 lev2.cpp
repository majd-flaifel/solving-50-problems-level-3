

#include <iostream>
using namespace std;
int main()
{
	/*int num;
	cout << "enter number smaller than 1: ";
	cin >> num;
	for (int i = num; i <= 1; i++) {
		cout << i << " ";

	}
	cout << endl;*/

	//another method by using while loop: 
	int num;
	cout << "enter number smaller than 1: ";
	cin >> num;
	while (num <= 1) {
		cout << num << " ";
		num++;
	}
	cout << endl;

}
