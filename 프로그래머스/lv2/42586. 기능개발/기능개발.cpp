#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int p = 0;
    int idx = 0;
    while (p < progresses.size())
    {
        for (int i = 0; i < progresses.size(); i++)
            progresses[i] += speeds[i];

        if (progresses[p] >= 100)
        {
            int i;
            answer.push_back(0);
            for (i = p; progresses[i] >= 100 && i < progresses.size(); ++i)
                answer[idx]++;
            p = i;
            idx++;
        }
    }
    return answer;
}