#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    answer.push_back(-1);
    for(int i = 1; i < s.size();i++)
    {
        bool temp = false;
        for(int j = i - 1; j >= 0;j--)
        {
            if(s[i] == s[j])
            {
                temp = true;
                answer.push_back(i - j);
                break;
            }
        }
        if(!temp)
        {
            answer.push_back(-1);
        }
    }
    return answer;
}