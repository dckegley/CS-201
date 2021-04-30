#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

void SW(string word)
{

	cout << "Enter a string: " << endl;
	cin >> word;
	int i;
	for (i = 0; i < word.size(); i++)
	{
		cout << word.substr(i) << endl;
	}
}

int l14main()
{
	string word;
	SW(word);
	return 0;
}