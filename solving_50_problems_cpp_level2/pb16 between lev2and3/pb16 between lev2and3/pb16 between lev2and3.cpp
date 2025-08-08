

#include <iostream>
using namespace std;
void read_info(float &a, float &d) {
	cout << "enter a: ";
	cin >> a;
	cout << "enter d: ";
	cin >> d;
}
float area_of_shape(float a,float d) {
	float area = a * sqrt(pow(d, 2) - pow(a, 2));
	return area;
}
int main()
{
	float a, d;
	read_info(a,d);
	cout<<"area= "<<area_of_shape(a,d)<<endl;

}

