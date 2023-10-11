#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string,int> pos;
    for(int i = 0; i < players.size();i++)
        pos[players[i]] = i;
    for(string s : callings)
    {
        int index = pos[s];
        swap(players[index], players[index - 1]);
        pos[players[index]] = index;
        pos[players[index - 1]] = index - 1;
    }
    return players;
}