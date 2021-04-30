#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::fill;

int l24main()
{
	vector<int> v{ 1,10,8,15,21,12,20,40,12,5 };

	cout << "Unsorted: " << endl;
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	cout << "Sorted: " << endl;
	std::sort(v.begin(), v.end());
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	cout << "Reversed: " << endl;
	std::reverse(v.begin(), v.end());
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	cout << "Filled: " << endl;
	fill(v.begin(), v.end() - 5, 6);
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}