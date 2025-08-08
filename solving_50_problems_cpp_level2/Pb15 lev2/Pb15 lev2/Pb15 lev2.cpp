
#include <iostream>
using namespace std;
void read_rect_info(float &len, float &wid) {
	cout << "enter the length of rectangular : ";
	cin >> len;
	cout << "enter the width of rectangular : ";
	cin >> wid;
}
float rect(float len,float wid) {
	
	float area = len * wid;
	return area;


}
int main()
{
	float len, wid;
	read_rect_info(len, wid);
	cout << "area= " << rect(len, wid) << endl;
}
