#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    map<int,int> diff;
    int temp = 0;
    for(int i = 0 ; i < numlist.size(); i++)
        answer.push_back(numlist[i] - n);
    for(int i = 0 ; i < numlist.size(); i++)
    {
        for(int j = 0; j < numlist.size();j++)
        {
            if(abs(answer[i]) <= abs(answer[j]))
            {
                if(abs(answer[i]) == abs(answer[j]))
                {
                    if(answer[i] > answer[j])
                    {
                        swap(answer[i],answer[j]);
                        swap(numlist[i],numlist[j]);
                    }
                    else
                        continue;
                }
                else
                {
                    swap(answer[i],answer[j]);
                    swap(numlist[i],numlist[j]);
                }
            }
        }
    }

    return numlist;
}