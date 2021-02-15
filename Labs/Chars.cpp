#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int l11main()
{
	string s;

	cout << "Enter a string:" << endl;
	cin >> s;
	cout << "The lowercase letters are:" << endl;


	for (int i = 0; i < s.length(); i++)
	{
		char c = (s[i]);

		if (c >= 97 && c <= 122)
		{
			cout << s[i];
		}
	}
	cout << endl;

	return 0;
}