

#include <iostream>
using namespace std;
void read_r(float &r,float &PI) {
	cout << "enter r: ";
	cin >> r;

}
float area_of_shape(float& r, float& PI) {
	float area = PI * pow(r, 2);
	return area;

}
int main()
{
	float r, PI=3.14;
	read_r(r, PI);
	cout<<"area= "<<area_of_shape(r, PI)<<endl;



}






