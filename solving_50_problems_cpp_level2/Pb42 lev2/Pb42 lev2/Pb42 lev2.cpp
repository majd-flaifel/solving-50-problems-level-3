
#include <iostream>
using namespace std;
void read_time(float &days, float &hrs, float &mins, float &secs) {
	cout << "how many days, hrs, mins, secs do you need for the task?\n";
	cout << "days: ";
	cin >> days;
	cout << "hrs: ";
	cin >> hrs;
	cout << "mins: ";
	cin >> mins;
	cout << "secs: ";
	cin >> secs;
}
float calcul_time_in_secs(float days, float hrs, float mins, float secs) {
	float total_secs = days * 24 * 3600 + hrs * 60 * 60 + mins * 60 + secs * 1;
	return total_secs;
}
float round_(float total_secs) {
	total_secs = round(total_secs);
	return total_secs;

}
int main()
{
	float days, hrs, mins, secs;
	read_time(days, hrs, mins, secs);
	float total_sec = calcul_time_in_secs(days, hrs, mins, secs);//note:i saved the func in var because i will use the func another time in the next func so i do not want to call the func twice insted i wil call it once and it will be saved in the var so when i need the func again i will use the vsar which contain the value of that func
	cout << "total_secs= " << total_sec <<" seconds"<<endl<<"-------------------------------\n";
	
	cout << "total_secs after rounding = " << round_(total_sec) << " seconds" << endl;




}


