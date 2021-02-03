#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string user_input;

void func(string user_input)
{
	int length;

	length = user_input.length();

	cout << user_input << endl;
	cout << "The string is " << length << " characters long" << endl;

	for (int i = 1; i <= length; i++)
	{
		cout << "#";
	}
	cout << '\n';

	reverse(user_input.begin(), user_input.end());
	cout << user_input << endl;
}


int main()
{
	cout << "Please enter a string: ";
	cin >> user_input;
	func(user_input);
	return 0;
}