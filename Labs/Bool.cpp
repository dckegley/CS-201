//Bool.cpp
//Daniel Kegley
//30 September 2020
//Returns true or false depending on if it is divisible by 3 then prints number if it returns true

#include "Bool.hpp"
#include <iostream>
using std::cout;
using std::endl;

bool isDiv3(int n)
{
	return (n % 3 == 0);
	
}

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
