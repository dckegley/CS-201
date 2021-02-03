#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int l5main()
{
	int n;
	cout << "Please enter a number " << endl;
	cin >> n;

	switch (n)
	{
	case 1:
		cout << "One" << endl;
		break;
	case 2:
		cout << "Two" << endl;
		break;
	case 3:
		cout << "Three" << endl;
		break;
	default:
		cout << "Goodbye" << endl;
		break;
	}

	if (n == 1)
	{
		cout << "one" << endl;
	}
	else if (n == 2)
	{
		cout << "two" << endl;
	}
	else if (n == 3)
	{
		cout << "three" << endl;
	}
	else if (n == 4)
	{
		cout << "goodbye" << endl;
	}
	return 0;
}