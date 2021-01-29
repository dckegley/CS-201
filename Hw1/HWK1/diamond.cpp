//diamond.cpp
//Daniel Kegley
//29 September 2021
//creates a diamond



#include <iostream>
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


int diamain()
{
	cout << "Enter a positive integer " << endl;
	int x;
	cin >> x;
	if (x > 0)
	{
		for (int i = 1; i <= x; i++)
		{
			diamond(x, i);
		}
		for (int i = x - 1; i > 0; i--)
		{
			diamond(x, i);
		}
	}
	else
	{
		cout << "ERROR - That is not a positive integer." << endl;
	}

	return 0;
}