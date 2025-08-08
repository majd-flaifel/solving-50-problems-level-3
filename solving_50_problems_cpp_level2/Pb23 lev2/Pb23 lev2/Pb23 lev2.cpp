#include <iostream>
using namespace std;
void read_info(float& a, float& b, float& c) {
	cout << "enter a : ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;
	cout << "enter c : ";
	cin >> c;
}
float area_of_shape(float a, float b, float c, float PI) {
	float p = (a + b + c) / 2;
	float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	T = pow(T, 2);
	float area = PI * T;
	return area;
}
int main()
{
	float a, b,c;
	const float PI = 3.14;

	read_info(a, b,c);
	cout << "area= " << area_of_shape(a, b,c, PI) << endl;
}