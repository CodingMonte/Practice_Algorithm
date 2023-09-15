#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<int> distance(n+1);
    queue<int> q;
    q.push(1);
    distance[1] = 1;
    while(!q.empty())
    {
        auto node = q.front();  // node에 q값을 삽입
        q.pop();                // q하나 삭제

        for(const auto& edge_at : edge)
        {
            
            if(node != edge_at[0] && node != edge_at[1])
                continue;
                auto other_node = 0;
            if(node == edge_at[0])
                other_node = edge_at[1];
            else
                other_node = edge_at[0];
            if(distance[node] == 0 || distance[other_node] != 0)
                continue;
            distance[other_node] = distance[node]+1;
            q.push(other_node);
            
        }
    }
    auto max_distance = *max_element(distance.begin(),distance.end());
    for(const auto& dist : distance)
        if(max_distance == dist)
            answer++;
    return answer;
}