#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using std::pair;
using std::vector;
using std::cout;
using std::endl;
using std::mismatch;


int l25main()
{
	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> v2{ 1,2,3,4,5,5,7,8,9,10 };
	vector<int> v3{ 1,2,3,4,5,6,7,8,9,10 };
	auto a = mismatch(v1.begin(), v1.end(), v3.begin());
	if (a.first == v1.end())
	{
		cout << "There is no mismatch." << endl;
	}
	else
	{
		cout << "There is a mismatch: " << *a.first << " and " << *a.second << endl;
	}
	cout << endl;
	return 0;
}