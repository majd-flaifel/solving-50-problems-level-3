
#include <iostream>
using namespace std;
//i solved it in 3ways

/*void print_char(char final_char) {
	for (char i = 'A'; i <= final_char; i++)
		cout << i << " ";
	cout << endl;

}*/
int main()
{
	//char final_char = 'Z';
	//print_char(final_char);
	
	//another solution: 
	/*for (int i = 65; i <= 90; i++)
		cout << char(i) << " ";
	cout << endl;*/

	//another solution by using while loop: 
	char final_char = 'Z';
	char initial_char = 'A';
	while (initial_char <= final_char)
	{
		cout << initial_char << " ";
		initial_char++;
	}
	cout << endl;
	
	
}

