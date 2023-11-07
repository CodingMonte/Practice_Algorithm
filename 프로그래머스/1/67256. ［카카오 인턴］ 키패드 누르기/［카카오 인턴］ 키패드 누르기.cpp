#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> key = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	{35, 0, 42}};

string solution(vector<int> numbers, string hand)
{
	string answer = "";
	int Left[2] = {3, 0};
	int Right[2] = {3, 2};
	int push_key[2] = {};
	for (int num : numbers)
	{
		if (num == 1 || num == 4 || num == 7)
		{
			answer += 'L';
			if (num == 1)
			{
				Left[0] = 0;
				Left[1] = 0;
			}
			else if (num == 4)
			{
				Left[0] = 1;
				Left[1] = 0;
			}
			else if (num == 7)
			{
				{
					Left[0] = 2;
					Left[1] = 0;
				}
			}
		}
		else if (num == 3 || num == 6 || num == 9)
		{
			answer += 'R';
			if (num == 3)
			{
				Right[0] = 0;
				Right[1] = 2;
			}
			else if (num == 6)
			{
				Right[0] = 1;
				Right[1] = 2;
			}
			else if (num == 9)
			{
				{
					Right[0] = 2;
					Right[1] = 2;
				}
			}
		}
		else
		{
			for (int i = 0; i < key.size(); i++)
			{
				auto it = find(key[i].begin(), key[i].end(), num);
				if (it == key[i].end())
					continue;
				push_key[0] = i;
				push_key[1] = it - key[i].begin();
				int left = abs(push_key[0] - Left[0]) + abs(push_key[1] - Left[1]);
				int right = abs(push_key[0] - Right[0]) + abs(push_key[1] - Right[1]);
				if (left < right)
				{
					Left[0] = push_key[0];
					Left[1] = push_key[1];
					answer += 'L';
					break;
				}
				else if (left > right)
				{
					Right[0] = push_key[0];
					Right[1] = push_key[1];
					answer += 'R';
					break;
				}
				else if (right == left)
				{
					if (hand == "right")
					{
						Right[0] = push_key[0];
						Right[1] = push_key[1];
						answer += 'R';
					}
					else
					{
						Left[0] = push_key[0];
						Left[1] = push_key[1];
						answer += 'L';
					}
					break;
				}
			}
		}
	}
	return answer;
}