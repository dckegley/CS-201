//diamond.cpp
//Daniel Kegley
//29 September 2021
//creates a diamond



#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

void diamond(int x, int i)
{
	for (int l = x - i; l > 0; l--)
	{
		cout << " ";
	}
	for (int j = 1; j < i * 2; j++)
	{
		cout << "#";
	}
	cout << endl;
}
