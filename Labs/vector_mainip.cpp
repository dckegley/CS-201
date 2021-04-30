#include<iostream>
#include<vector>
#include"vector_mainip.hpp"
#include<string>

using std::vector;
using std::string;
using std::cout;
void print()
{
	vector<string> v{ "hello", "welcome", "here", "today" };
	int i;
	for (i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";


	}

}
