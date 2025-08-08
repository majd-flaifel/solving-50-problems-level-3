

#include <iostream>
#include<string>
using namespace std;
void names() {
	string name;
	cout << "enter your name: ";
	getline(cin, name);
	cout <<"your name is: " << name << endl;
}
int main()
{
	names();

}

