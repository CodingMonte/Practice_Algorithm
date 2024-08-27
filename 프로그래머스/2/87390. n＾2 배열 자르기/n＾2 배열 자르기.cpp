#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    long long cnt = 1 + left / n;
    long long count = left / n * n;
    for(int i = left / n; i < n; i++)
    {
        for(int j = 0; j < cnt; j++)
        {
            if(count >= left && count <= right)
                answer.push_back(cnt);
            count++;
        }
        if(count > right)
            break;
        for(int j = cnt + 1; j <= n; j++)
        {
            if(count >= left && count <= right)
                answer.push_back(j);
            count++;
        }
        cnt++;
        if(count > right)
            break;
    }
    return answer;
}