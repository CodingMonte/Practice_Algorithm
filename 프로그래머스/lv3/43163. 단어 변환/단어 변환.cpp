#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
bool converting(const string &str1, const string &str2)
{
    int temp = 0;
    for(int i = 0; i < str1.size();i++)
    {
        if(str1[i] != str2[i])
            temp++;
    }
    if(temp == 1)
        return true;
    else
        return false;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    if(find(words.begin(),words.end(),target) == words.end())   // target이 없으면 0을 반환한다.
        return 0;
    
    queue<pair<string,int>> q;                                          
    
    q.push({begin,0});
    
    while(!q.empty())
    {
        string beginTemp = q.front().first;                     // 현재 단어                  
        int answer = q.front().second;                          // 단어 바꾼 횟수 업데이트
        q.pop();
        
        for(string s : words)
        {
            if(converting(beginTemp,s))                         // 스펠링 하나만 차이난다면 실행  
            {
                if(s == target)                                 // 현재 단어가 target과 같다면 종료
                    return answer + 1;
                q.push({s,answer + 1});                           // 아니라면 횟수++
                s = "";
            }
        }
    }
    return 0;
}