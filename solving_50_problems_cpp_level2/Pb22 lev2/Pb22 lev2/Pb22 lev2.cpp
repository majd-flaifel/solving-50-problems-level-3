#include <iostream>
using namespace std;
void read_info(float &a,float &b) {
	cout << "enter a : ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;
}
float area_of_shape(float a, float b,float PI) {
	float area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return area;
}
int main()
{
	float a,b;
	const float PI = 3.14;

    read_info(a, b);
	cout << "area= " << area_of_shape(a, b, PI)<< endl;
}
