//Grid.cpp
//Daniel Kegley
//22 September 2020
// Creates a grid and lets you place x in it



#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int grid[8][8];
void drawgrid()
{
	for (int i = 0; i < 8; i++)
	{
		for (int l = 1; l <= 17; l++)
		{
			cout << "-";
		}
		cout << endl;
		for (int j = 0; j < 8; j++)
		{
			if (grid[i][j] == 1)
			{
				cout << "|X";
			}
			else if (grid[i][j] == 0)
			{
				cout << "|.";
			}
		}
		cout << "|" << endl;
	}

	for (int l = 1; l <= 17; l++)
	{
		cout << "-";
	}
	cout << endl;
}
int gridmain()
{
	int x, y;
	while (true)
	{
		drawgrid();
		cout << "Enter a negative number to end." << endl;
		cout << "Enter the column(0-7): ";
		cin >> x;
		if (x < 0)break;
		cout << "Enter the row(0-7): ";
		cin >> y;
		if (y < 0)break;
		grid[y][x] = 1;
	}
	return 0;
}
