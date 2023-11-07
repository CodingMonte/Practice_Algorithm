#include <algorithm>
#include <iostream>
#include <regex>
#include <string>

using namespace std;

string solution(string id)
{
	string answer = "";
	regex pattern1("[^a-z0-9-_.]");
	regex pattern2("\\.+");
	// step 1
	for (int i = 0; i < id.size(); i++)
	{
		if (id[i] >= 'A' && id[i] <= 'Z')
			id[i] += 32;
	}
	// step 2
	id = regex_replace(id, pattern1, "");
	// step 3
	id = regex_replace(id, pattern2, ".");
	// step 4
	if (id.front() == '.')
		id = id.substr(1);
	if (id.back() == '.')
		id.pop_back();
	// step 5
	if (id == "")
		id += "aaa";
	// step 6
	if (id.size() > 15)
	{
		id = id.substr(0, 15);
		if (id.back() == '.')
			id.pop_back();
	}
    // step 7
    while(id.size()<=2)
    {
        id += id[id.size() - 1];
    }

	return id;
}