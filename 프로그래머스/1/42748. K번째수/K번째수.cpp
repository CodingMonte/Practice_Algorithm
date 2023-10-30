#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> com : commands)
    {
        vector<int> extract(array.begin() + com[0] - 1,array.begin() + com[1]);
        sort(extract.begin(),extract.end());
        answer.push_back(extract[com[2]-1]);
    }
    return answer;
}