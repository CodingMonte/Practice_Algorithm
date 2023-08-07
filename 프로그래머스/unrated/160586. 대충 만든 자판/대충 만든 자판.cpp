#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(const string& target : targets)
    {
        int sum = 0;
        for(char t : target)
        {
            int temp = 101;
            for(const string& row : keymap)
            {
                auto it = find(row.begin(),row.end(), t);
                if(it != row.end())
                {
                    int idx = it - row.begin();
                    temp = min(idx + 1,temp);
                }
            }
            if(temp == 101)
            {
                sum = -1;
                break;
            }
            sum += temp;
        }
        answer.push_back(sum);
    }
    return answer;
}