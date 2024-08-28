#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> c) {
    int answer = 0;
    int n = c.size();
    sort(c.begin(),c.end(),greater<int>());
    if(c[0] == 0) return 0;
    
    for(int i = 0; i < n; i++)
    {
        if(c[i] > i) answer++;
        else break;
    }
    return answer;
}