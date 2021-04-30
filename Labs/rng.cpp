#include<iostream>
using std::cout;
using std::endl;
#include<random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
#include<vector>
#include<iterator>

int l27main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> coin(0, 1);

	int head = 0;
	int tail = 0;

	for (int i = 0; i < 1000; i++)
	{
		int toss = coin(gen);
		if (toss == 0)
		{
			head++;
		}
		else
		{
			tail++;
		}
	}
	cout << "Heads: " << head << " Tails: " << tail << endl;
	return 0;
}