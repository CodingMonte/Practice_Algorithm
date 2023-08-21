#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i < t.size()-p.size() + 1;i++)
    {
        string temp ="";
        for(int j = i; j < i+p.size(); j++)
        {
            temp += t[j];
        }
        if(stoll(temp) <= stoll(p))
            answer++;
    }
    return answer;
}