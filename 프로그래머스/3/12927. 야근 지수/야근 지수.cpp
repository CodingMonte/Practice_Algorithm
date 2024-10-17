#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    
    priority_queue<int> max_heap;
    
    for(int work : works)
    {
        max_heap.push(work);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(max_heap.empty()) break;
        int max_work = max_heap.top();
        max_heap.pop();
        if(max_work > 0)
            max_heap.push(max_work - 1);
    }
    
    long long answer = 0;
    
    while(!max_heap.empty())
    {
        int work = max_heap.top();
        max_heap.pop();
        answer += (long long)work * (long long)work;
    }
    
    return answer;
}