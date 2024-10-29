#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    if(n > s)
        return {-1};
    vector<int> sub;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sub.push_back(s/n);
        sum += s/n;
    }
    if(sum == s)
        return sub;
    
    for(int i = 0; i < s - sum; i++)
    {
        sub[i % n]++;
    }
    sort(sub.begin(),sub.end());
    return sub;
}