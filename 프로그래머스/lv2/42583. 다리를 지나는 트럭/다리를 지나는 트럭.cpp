#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck) {
    int answer = 0;
    
    int sum = 0;
    int i = 0;
    queue <int> q;
    
    while(1)
    {
        if(i == truck.size())
        {
            answer += bridge_length;
            break;
        }
        answer++;
        int temp = truck[i];
        
        if(q.size() == bridge_length)
        {
            sum -= q.front();
            q.pop();
        }
        if(sum + temp <= weight)
        {
            sum += temp;
            q.push(temp);
            i++;
        }
        else
            q.push(0);
    }
    
    return answer;
}