

#include <iostream>
using namespace std;
void read_num(int& num1, int& num2) {
	cout << "please enter 2 numbers:\n";
	cin >> num1 >> num2;

}

void print_num(int num1, int num2) {
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
	cout << "-------------------------\n";

}
void swap(int &num1, int &num2) {
	int temp = num1;//temp is abbrovation for temperory
	num1 = num2;
	num2 = temp;
}
void print_num_after_swaping(int num1, int num2) {
	cout << "num1 after swaping = " << num1 << endl;
	cout << "num2 after swaping = " << num2 << endl;
}
int main()
{
		int num1, num2;
	read_num( num1,num2);
	print_num(num1, num2);
	swap(num1, num2);
	print_num_after_swaping(num1, num2);


	cout << "num1 after swaping inside main: " << num1<<endl;
	cout << "num2 after swaping inside main: " << num2 << endl;


}
