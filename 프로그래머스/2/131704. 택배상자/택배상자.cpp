#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    int n = order.size();
    stack<int> s;
    int idx = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i == order[idx])
        {
            answer++;
            idx++;
        }
        else
        {
            while(!s.empty() && s.top() == order[idx])
            {
                answer++;
                idx++;
                s.pop();
            }
            s.push(i);
        }
        
    }
    while(!s.empty() && idx < n && s.top() == order[idx])
    {
        answer++;
        idx++;
        s.pop();
    }
    return answer;
}