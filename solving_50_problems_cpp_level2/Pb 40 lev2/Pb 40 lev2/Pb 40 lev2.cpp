

#include <iostream>
using namespace std;
int main()
{
	float bill_value,total_bill_1, total_bill_2;
	cout << "enter the bill_value: ";
	cin >> bill_value;
	float  services_fee = 0.1, sales_tax = 0.16;

	//there are two ways to calculate total bill :
	
	//1st way is: calculate bill value after adding services fee then calculate it again after adding sales tax
	/*total_bill_1 = bill_value + bill_value * services_fee;
	total_bill_2 = total_bill_1 + total_bill_1 * sales_tax;*/
	
	//2nd way:
	// 10% means: to multibly bill valu in 1.1 and 16% means:  to multibly bill valu in 1.16
	total_bill_1 = bill_value * 1.1;
	total_bill_2 = total_bill_1 * 1.16;

	cout << "total= " << total_bill_2 << endl;
}

