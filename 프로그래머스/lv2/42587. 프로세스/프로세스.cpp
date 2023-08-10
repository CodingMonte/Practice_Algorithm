#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> p, int location) {
    int answer = 0;
    int temp = 0, Nextindex = 0;
    auto it = max_element(p.begin(), p.end());

    while (1)
    {
        temp = *it;
        *it = 0;
        answer++;
        Nextindex = it - p.begin();
        if (it - p.begin() == location)
            return answer;
        if (it == p.end() - 1)
            it--;
        for (int i = it - p.begin() + 1; i != it - p.begin(); i++)
        {
            if (p[i] == temp)
            {
                p[i] = 0;
                Nextindex = i;
                answer++;
                if (i == location)
                    return answer;
            }
            if (i + p.begin() == p.end() - 1)
                i = -1;
        }
        auto check1 = max_element(p.begin(), p.end());
        auto check2 = max_element(Nextindex + p.begin(), p.end());
        if (*check1 <= *check2)
            it = check2;
        else
            it = check1;

    }
}