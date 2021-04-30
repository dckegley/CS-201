#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ofstream;
using std::setw;


int l28main()
{
	ofstream file("lab28.txt");

	for (int i = 1; i <= 100; i++)
	{
		file << setw(2) << i << " ";
		if (i % 10 == 0)
		{
			file << endl;
		}
	}
	return 0;
}
