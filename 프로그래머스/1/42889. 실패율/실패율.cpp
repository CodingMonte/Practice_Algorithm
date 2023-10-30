#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
bool compare(pair<int,double> a, pair<int,double> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int,double>> fails(N);
    int nowPlayers = stages.size();
    
    for(int i = 1; i <= N;i++)
    {
        int ThisStage = count(stages.begin(),stages.end(), i);
        
        if(nowPlayers == 0)
            fails[i - 1] = make_pair(i,0);
        else
        {
            double fail = (double)(ThisStage)/(double)(nowPlayers);
            fails[i - 1] = make_pair(i,fail);
        }
        nowPlayers -= ThisStage;
    }
    sort(fails.begin(),fails.end(),compare);
    for(auto f : fails)
        answer.push_back(f.first);
    return answer;
}