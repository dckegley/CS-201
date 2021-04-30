#include <iostream>
#include <sstream>
#include <string>
#include "Str_source.hpp"
#include <math.h>
#include <vector>
using std::cin;
using std::cout;
using std::istringstream;
using std::string;
using std::pow;
using std::vector;
using std::endl;

void  str()
{
	/*cout << "Enter a string with a number ";
	string sv;
	cin >> sv;*/

	vector<string> sv{ "69", "69a", "a69", "5.6",
		"68", "11", "68 69", "0xA" };
	int i;
	for (auto string : sv)
	{
		istringstream iss(string);

		int val;

		iss >> val;

		if (!iss)
		{
			cout << "There are no numbers" << endl;
		}

		else
		{
			cout << pow(val, 2) << endl;
		}

	}

}