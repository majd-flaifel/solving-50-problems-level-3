#include <iostream>
using namespace std;
void read_info (float &L,float PI) {
	cout << "enter L: ";
	cin >> L;
}
float area_of_shape(float& L, float PI) {
	float area = (pow(L,2)) / 4 * PI;
	return area;
}
int main()
{
	float L;
	const float PI = 3.14;

	read_info(L, PI);
	cout << "area= " << area_of_shape(L,PI) << endl;
}

