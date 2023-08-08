#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> oper) {
    vector<int> answer;
    for(int i = 0; i < oper.size(); i++)
    {
        if(oper[i][0] == 'I')
        {
            size_t pos = oper[i].find_first_of("-0123456789");
            int Inumber = stoi(oper[i].substr(pos));
            answer.push_back(Inumber);
        }
        else if(oper[i][0] == 'D')
        {
            if(!answer.empty())
            {
                size_t pos = oper[i].find_first_of("-0123456789");
                int Dnumber = stoi(oper[i].substr(pos));
                if(Dnumber == 1)
                {
                    auto maxIt = max_element(answer.begin(),answer.end());
                    answer.erase(maxIt);
                
                }
                else if(Dnumber == -1)
                {
                    auto minIt = min_element(answer.begin(),answer.end());
                    answer.erase(minIt);
                }
            }
        }
    }
    if(answer.empty())
        return {0,0};
    else
    {
        auto maxi = *max_element(answer.begin(),answer.end());
        auto mini = *min_element(answer.begin(),answer.end());

        answer.clear();
        answer.push_back(maxi);
        answer.push_back(mini);
        return answer;
    }
}