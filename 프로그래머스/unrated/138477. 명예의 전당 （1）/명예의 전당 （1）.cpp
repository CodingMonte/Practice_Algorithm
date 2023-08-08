#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    for(int i = 0; i < score.size();i++)
    {
        if(honor.size() < k)
            honor.push_back(score[i]);
        else
        {
            if(honor[0] <= score[i])
                honor[0] = score[i];
        }
        sort(honor.begin(),honor.end());
        answer.push_back(honor[0]);
    }
    return answer;
}