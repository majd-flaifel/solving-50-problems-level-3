
#include<iostream>
using namespace std;
int main()
{
	float loan_amount, num_of_months;
	cout << "loan_amount: ";
	cin >> loan_amount;
	cout << "num_of_months ";
	cin >> num_of_months;
	float monthly_payment = loan_amount / num_of_months;
	cout << "you have to pay " << monthly_payment << " every month to settle the loan\n";



}
