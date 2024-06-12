#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks)
{
	int hp = health;
	int skill_time = 0;
	int time = attacks[attacks.size()-1][0];

	for (int i = 0; i <= time; i++)
	{
		if (attacks[0][0] != i)
		{
			hp += bandage[1];
			if(hp > health)
				hp = health;
			skill_time++;
			if (skill_time == bandage[0])
			{
				skill_time = 0;
				hp += bandage[2];
				if(hp > health)
					hp = health;
			}
		}
		else if(attacks[0][0] == i)
		{ 
			hp -= attacks[0][1];
			if(hp <= 0)
				return -1;
			skill_time = 0;
			attacks.erase(attacks.begin());
		}
	}
	return hp;
}