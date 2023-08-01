#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can = {"aya", "ye", "woo", "ma"};
    
    for(int i = 0; i < babbling.size();i++)
    {
        string temp = babbling[i];
        
        for(int j = 0; j < 4; j++)
        {
            size_t found = babbling[i].find(can[j]);
            if(found != string::npos)
                babbling[i].erase(found,can[j].length());
        }
        for(int j = 3; j >= 0; j--)
        {
            size_t found = temp.find(can[j]);
            if(found != string::npos)
                temp.erase(found,can[j].length());
        }
        
        if(babbling[i].empty() && temp.empty())
            answer++;
    }
    return answer;
}