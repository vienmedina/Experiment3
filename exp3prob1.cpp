#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int a, b = 10;
	float number[10], total, average;
	
	for (a = 0; a < b; a++) {
			cout << "Enter number " << a + 1 << ": ";
			cin >> number[a];
	}
	
	cout << "\n\nDisplay \n" << endl;
	
	for (a = 0; a < b; ++a) {
			cout << "Enter number " << a + 1 << ": ";
			cout << number[a] << endl;
	}
	
	total = number[0] + number[1] + number[2] + number[3] + number[4] + number[5] + number[6] + number[7] + number[8] + number[9];
	
	average = total / b;
	
	cout << "\nTotal: " << total << endl;
	cout << "Average: " << average;
	
	_getch();
	return 0;
}
