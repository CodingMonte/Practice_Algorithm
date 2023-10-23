#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroCnt = 0;
    int winCnt = 0;
    for(int num : lottos)
    {
        if(num == 0)
            zeroCnt++;
        else
        {
            auto it = find(win_nums.begin(),win_nums.end(),num);
            if(it != win_nums.end())
                winCnt++;
        }
    }
    if(winCnt + zeroCnt <= 1)
        return {6,6};
    else
        answer.push_back(7- winCnt - zeroCnt);
    if(winCnt <= 1)
        answer.push_back(6);
    else
        answer.push_back(7 - winCnt);
    return answer;
}