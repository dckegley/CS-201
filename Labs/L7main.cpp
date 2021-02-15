#include <iostream>
#include "intio.hpp"

using std::cout;
using std::endl;

int l7main() 
{
	

	cout << "Type an integer : ";
	int num = getInt();
	cout << "Type an integer : ";
	int num1 = getInt();
	cout << "Type an integer : ";
	int num2 = getInt();

	

	putInt(num, 10);
	cout << endl;
	putInt(num1, 10);
	cout << endl;
	putInt(num2, 10);
	cout << endl;

	return 0;
}