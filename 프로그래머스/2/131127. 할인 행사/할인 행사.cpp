#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    unordered_map<string, int> m;
        
    for(int i = 0; i <= discount.size() - 10;i++)   // discount 사이즈에 의한 for문 반복횟수
    {
        for(int j = 0; j < want.size(); j++)        // key에 원하는 품목들을 저장함, value에 원하는 품목의 각 개수 저장
        {
            m[want[j]] = number[j];
        }
        for(int k = i; k < i + 10;k++)              // 만약 원하는 것을 사면 map의 second를 줄임
        {
            m[discount[k]]--;
        }
        for(auto n : m)                             // 원하는 것을 사지 못한게 있다면 fail
        {
            if(n.second > 0)
            {
                answer--;
                break;
            }
        }
        answer++;
    }
    return answer;
}