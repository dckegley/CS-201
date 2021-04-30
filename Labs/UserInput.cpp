#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::endl;

void getUserStrings(vector<string>& words)
{
	string s;
	while (s != "end")
	{
		cin >> s;
		words.push_back(s);

	}



}