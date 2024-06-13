#include <algorithm>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<string> friends, vector<string> gifts)
{
	int friend_count = friends.size();											// 친구 수
	unordered_map<string, int> name_indexing;									// 이름을 숫자 인덱스로
	vector<vector<int>> gift_count(friend_count, vector<int>(friend_count, 0)); // 서로 주고 받은 횟수
	vector<int> give_count(friend_count, 0);									// 준 횟수
	vector<int> receive_count(friend_count, 0);									// 받은 횟수
	vector<int> rich_friends(friend_count, 0);

	for (int i = 0; i < friend_count; i++) // 인덱싱
		name_indexing[friends[i]] = i;

	for (auto &s : gifts)
	{
		istringstream iss(s);
		vector<string> names;
		string name;

		while (iss >> name)
			names.push_back(name); // 준 사람 받은 사람 분리

		int give_index = name_indexing[names[0]];	 // 준 사람 인덱스
		int receive_index = name_indexing[names[1]]; // 받은 사람 인덱스
		gift_count[give_index][receive_index]++;	 // 선물 주고 받은 인덱스 기록
		give_count[give_index]++;
		receive_count[receive_index]++;
	}
	for (int i = 0; i < friend_count; i++)
	{
		for (int j = 0; j < friend_count; j++)
		{
			if (i == j)
				continue;
			else if (gift_count[i][j] > gift_count[j][i])
				rich_friends[i]++;
			else if (gift_count[i][j] < gift_count[j][i])
				rich_friends[j]++;
			else
			{
				if (give_count[i] - receive_count[i] > give_count[j] - receive_count[j])
					rich_friends[i]++;
				else if (give_count[i] - receive_count[i] < give_count[j] - receive_count[j])
					rich_friends[j]++;
                else
                    continue;
			}
		}
	}
	return *max_element(rich_friends.begin(), rich_friends.end())/2;
}