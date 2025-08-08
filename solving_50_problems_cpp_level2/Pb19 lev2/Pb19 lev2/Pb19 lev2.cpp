#include <iostream>
using namespace std;
void read_info(float  &D, float PI) {
	cout << "enter D : ";
	cin >> D;
}
float area_of_shape(float& D, float PI) {
	float area = (PI * pow(D,2)) / 4;
	return area;

}
int main()
{
	float D;
	const float PI = 3.14;

	read_info(D, PI);
	area_of_shape(D, PI);
	cout << "area= " << area_of_shape(D,PI) << endl;
	
}
