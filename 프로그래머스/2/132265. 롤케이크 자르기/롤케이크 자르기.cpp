#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> t)
{
    int answer = 0;
    int n = t.size();
    vector<int> LeftU(n,0);
    vector<int> RightU(n,0);
    unordered_map<int,int> left,right;
    
    for(int i = 0; i < n;i++)
    {
        left[t[i]]++;
        LeftU[i] = left.size();
    }
    for(int i = n-1; i >= 0;i--)
    {
        right[t[i]]++;
        RightU[i] = right.size();
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(RightU[i + 1] == LeftU[i]) answer++;
    }
    return answer;
}