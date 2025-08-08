

#include <iostream>
using namespace std;
int main()
{
    int pin_code;
    int balance = 7500;
    cout << "enter pin_code: ";
    cin >> pin_code;
    while (pin_code != 1234) {
        cout << "wrong password, enter the password again: ";
        cin >> pin_code;

    }

        cout << "your balance is: " << balance << endl;
}

