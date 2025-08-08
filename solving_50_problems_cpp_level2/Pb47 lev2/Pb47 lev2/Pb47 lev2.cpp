

#include <iostream>
using namespace std;
int main()
{
	float loan_amount,monthly_payment;
	cout << "loan_amount: ";
	cin >> loan_amount;
	cout << "monthly_payment ";
	cin >> monthly_payment;
	float months = loan_amount / monthly_payment;
	cout << "you need " << months << " months to settle the loan\n";



}


