#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> arr, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> newmenu(arr.begin(),arr.end());
    
     while (newmenu.size() > 1 && newmenu.top() < K) 
     {
        int min1 = newmenu.top();
        newmenu.pop();
        int min2 = newmenu.top();  
        newmenu.pop();
        int mixed_scoville = min1 + (min2 * 2);
        newmenu.push(mixed_scoville);

        ++answer;
    }
    if (newmenu.top() < K) return -1;

    return answer;
    
}