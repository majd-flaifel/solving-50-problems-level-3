

#include <iostream>
using namespace std;
void read_num(float &number, float &temp, int &m) {
	cout << "enter number: ";
	cin >> number;
	temp = 1;//i made a temparory var has the value of 1 because i do not want to change the value of number
	cout << "the power for this number: ";
	cin >> m;
}
float res(float number, float temp, int &m) {
	/*for (int i = 1; i <= m; i++) {
		temp = temp * number;
	}*/
	//another sol by while loop instead of for loop:
	int counter = 1;
	while (counter <= m) {
		temp = temp * number;
		counter++;
	}
	return temp;
}
float rounding(float result) {
	result = round(result);
	return result;
}
int main()
{
	float number, temp;
		int m;//m must be int becuase i will compare it with i in the for loop <for do not work good if i made i float 
		read_num(number, temp, m);
		float result = res(number, temp, m);
        cout << number << " raised to the power of " << m << " is: " << result<<"\n----------------------------\n" <<endl;
		cout << number << " raised to the power of " << m << " after rounding is: " << rounding(result) << endl;
}

