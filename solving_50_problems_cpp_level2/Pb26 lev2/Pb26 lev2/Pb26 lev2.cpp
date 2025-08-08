
#include <iostream>
using namespace std;
int main()
{
	/*float num;
	cout << "enter number greater than1: ";
	cin >> num;
	
		for (int i = 1; i <= num; i++)
			cout << i << " ";*/
	

	// another sol by using do while loop:
		/*float num;
		float counter = 1;
		cout << "enter number greater than1: ";
		cin >> num;
		do
		{
			cout << counter<<" ";
			counter++;
		} while (counter <= num);*/
	// the problem of this method in this question is: if the user entered 0 it will enter the loop 

	// another sol by using  while loop:
		float num;
		float counter = 1;
		cout << "enter number greater than1: ";
		cin >> num;
		while (counter <= num) {
			cout << counter << " ";
			counter++;
		}
			


}

