//modifyString.cpp
//Daniel Kegley
//25 September 2020
//Adds a number to a string and then says the length

#include<iostream>
#include"modifyString.hpp"
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int modifyString(string& referencedString, int i)
{


	string string_appened = referencedString += std::to_string(i);

	return referencedString.length();
}

int l9main()
{
	string s = "Hello";
	cout << "String Length " << s.length() << endl;
	cout << "Starting string is " << s << endl;
	cout << "String Length: " << modifyString(s, 1) << endl;
	cout << "New string: " << s << endl;
	cout << "String Length: " << modifyString(s, 2) << endl;
	cout << "New string: " << s << endl;
	cout << "String Length: " << modifyString(s, 3) << endl;
	cout << "New string: " << s << endl;
	return 0;
}