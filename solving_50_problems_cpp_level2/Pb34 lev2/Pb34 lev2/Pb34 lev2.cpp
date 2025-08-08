

#include <iostream>
using namespace std;
int main()
{
	float total_sales,percentage,commission;
	cout << "enter the total_sales: ";
	cin >> total_sales;
	if (total_sales > 1000000) {
		percentage = 0.01;
	commission = total_sales * percentage;
	cout << "total commission is: " << commission << endl;
	}
	else if (total_sales >= 500000 &&total_sales<=1000000) {
		percentage = 0.02;
	 commission = total_sales * percentage;
	 cout << "total commission is: " << commission << endl;

	}
	else if (total_sales >= 100000 && total_sales <= 500000) {
		percentage = 0.03;
		 commission = total_sales * percentage;
		 cout << "total commission is: " << commission << endl;

	}
	else if (total_sales >= 50000 && total_sales <= 1000000) {
		percentage = 0.05;
	 commission = total_sales * percentage;
	 cout << "total commission is: " << commission << endl;

	}
	else {
		percentage = 0;
		commission = total_sales * percentage;
		cout << "total commission is: " << commission << endl;

	}


}

