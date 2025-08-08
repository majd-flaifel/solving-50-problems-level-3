

#include<iostream>
using namespace std;
void read_number(float& num) {
	cout << "enter num: ";
	cin >> num;
	
}
/*void power(float num, float a, float b, float c) {
	
	cout << "2nd degree of " << num << " is: " << a << endl;
	cout << "3rd degree of " << num << " is: " << b << endl;
	cout << "4th degree of " << num << " is: " << c << endl;
}*/

/*void round_(float num, float a, float b, float c) {
	cout << "2nd degree of " << num << " after rounding is: " <<round( a) << endl;
	cout << "3rd degree of " << num << " after rounding is: " << round(b) << endl;
	cout << "4th degree of " << num << " after rounding is: " << round(c) << endl;
}*/

struct numbers {
	float a, b, c;
};

void power(float num,numbers nums) {

	cout << "2nd degree of " << num << " is: " << nums.a << endl;
	cout << "3rd degree of " << num << " is: " << nums.b << endl;
	cout << "4th degree of " << num << " is: " << nums.c << endl;
}

void round_( float num, numbers nums) {
	cout << "2nd degree of " << num << " after rounding is: " <<round( nums.a) << endl;
	cout << "3rd degree of " << num << " after rounding is: " << round(nums.b) << endl;
	cout << "4th degree of " << num << " after rounding is: " << round(nums.c) << endl;
}
int main() {
	/*float num;
	read_number(num);
	float a = pow(num, 2), b = pow(num, 3), c = pow(num, 4);
	power(num, a, b, c); cout << "---------------------------\n";
	round_(num, a, b, c);*/

	numbers nums;
	float num;
	read_number(num);
	nums.a = pow(num, 2);
	nums.b = pow(num, 3);
	nums.c = pow(num, 4);

	power(num,nums); cout << "---------------------------\n";
	round_(num, nums);
}