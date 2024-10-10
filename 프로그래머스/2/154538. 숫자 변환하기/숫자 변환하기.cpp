#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
    vector<int> visited(y + 1, 0);
    queue<pair<int,int>> q;
    
    q.push({x,0});
    visited[x] = 1;
    
     while (!q.empty()) {
        int current = q.front().first;
        int steps = q.front().second;
        q.pop();
        
        if (current == y) return steps;
        
        if (current + n <= y && !visited[current + n]) {
            visited[current + n] = 1;
            q.push({current + n, steps + 1});
        }
        if (current * 2 <= y && !visited[current * 2]) {
            visited[current * 2] = 1;
            q.push({current * 2, steps + 1});
        }
        if (current * 3 <= y && !visited[current * 3]) {
            visited[current * 3] = 1;
            q.push({current * 3, steps + 1});
        }
    }
    
    return -1;
}