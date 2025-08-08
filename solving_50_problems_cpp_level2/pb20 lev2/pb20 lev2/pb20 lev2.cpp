#include <iostream>
using namespace std;
void read_info(float &A,float PI) {
	cout << "enter A : ";
	cin >> A;
}
float area_of_shape(float& A, float PI) {
	float area = (PI * pow(A, 2)) / 4;
	return area;
}
int main()

{
	float A;
	const float PI = 3.14;

	read_info(A,PI);
	cout<<"area= "<<area_of_shape(A, PI)<<endl;
}

