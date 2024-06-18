#include <iostream>

using namespace std;

int main()
{
	int test;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		int east = 0;
		int western = 0;
		int south = 0;
		int north = 0;
        int x = 0;
	    int y = 0;
		string command;
		cin >> command;
		char direction = 'N';
		for (char c : command)
		{
			if (c == 'L')
			{
				if (direction == 'N')
					direction = 'W';
				else if (direction == 'W')
					direction = 'S';
				else if (direction == 'S')
					direction = 'E';
				else
					direction = 'N';
			}
			else if (c == 'R')
			{
				if (direction == 'N')
					direction = 'E';
				else if (direction == 'E')
					direction = 'S';
				else if (direction == 'S')
					direction = 'W';
				else
					direction = 'N';
			}
			else if (c == 'F')
			{
				if (direction == 'N')
				{
					y++;
					north = y > north ? y : north;
				}
				else if (direction == 'S')
				{
					y--;
					south = y < south ? y : south;
				}
				else if (direction == 'E')
				{
					x++;
					east = x > east ? x : east;
				}
				else
				{
					x--;
					western = x < western ? x : western;
				}
			}
			else if (c == 'B')
			{
				if (direction == 'N')
				{
					y--;
					south = y < south ? y : south;
				}
				else if (direction == 'S')
				{
					y++;
					north = y > north ? y : north;
				}
				else if (direction == 'E')
				{
					x--;
					western = x < western ? x : western;
				}
				else
				{
					x++;
					east = x > east ? x : east;
				}
			}
		}
		int square = abs(east - western) * abs(north - south);
		cout << square << endl;
	}

	return 0;
}