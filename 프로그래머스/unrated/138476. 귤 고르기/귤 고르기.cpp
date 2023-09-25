#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    for(int t: tangerine)
        m[t]++;
    vector<pair<int,int>> arr(m.begin(),m.end());
    
    sort(arr.begin(), arr.end(), [](auto& a, auto& b) 
         {return a.second > b.second;});
    for (auto& a : arr) 
    {
        if(a.second <= k)
        {
            k -= a.second;
            answer++;
        }
        else if(a.second > k)
        {
            answer++;
            break;
        }
        if(k == 0)
            break;
    }
    return answer;
}