
#include "truncstruct.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int l21main()
{
	string s;

	cout << "Enter a string: ";
	cin >> s;
	cout << endl;

	StringInfo i = trunc8(s);

	cout << "String: " << i.str << endl;
	cout << "Length: " << i.len << endl;
	return 0;
}