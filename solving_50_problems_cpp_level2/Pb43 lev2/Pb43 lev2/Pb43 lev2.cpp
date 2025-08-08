#include <iostream>
using namespace std;
int main()
{
    int secs;
    cout << "Enter the number of seconds and I will give you it in days, hours, minutes, seconds: ";
    cin >> secs;

    int days = secs / 86400;
    int rem_after_days = secs % 86400;

    int hours = rem_after_days / 3600;
    int rem_after_hours = rem_after_days % 3600;

    int minutes = rem_after_hours / 60;
    int seconds = rem_after_hours % 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";

    return 0;
}