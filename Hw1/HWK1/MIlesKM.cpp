//MilesKM.cpp
//Daniel Kegley
//29 January 2021
//Converts Miles to KM

#include <iostream>

int main()
{
	int mi;
	std::cout << "Miles to Kilometers converter" << std::endl;
	std::cout << "How many miles? ";
	std::cin >> mi;
	std::cout << mi * 1.609;
	return 0;
}
