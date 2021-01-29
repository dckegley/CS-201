//greatest.cpp
//Daniel Kegley
//29 September 2021
// enter positive intigers and it stores the greates

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int greatmain()
{
	int g = 0;
	while (true)
	{
		cout << "Please enter a sequence of positive integer ending in 0: ";
		int i = 0;
		cin >> i;
		if (i == 0) break;

		if (i > g)
		{
			g = i;
		}
	}
	if (g > 0)
	{
		cout << "The greatest number is " << g;
	}
	else
	{
		cout << "No positive integers were entered";
	}
	return 0;

}
