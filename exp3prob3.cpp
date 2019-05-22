#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char arr[100];
    int x;
    
	cout << "Enter number of elements: "; cin >> x;

	cout << "Enter string: ";

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

	cout << "Reverse: ";

    for (int i = x; i>=0; i--)
    {
        cout << arr[i];
    }

	_getch();
    return 0;
}
