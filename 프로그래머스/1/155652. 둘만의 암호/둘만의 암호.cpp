#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(char c : s)
    {
        for(int i = 0; i < index;i++)
        {
            c++;
            if(c > 'z')
                c = 'a';
            if(find(skip.begin(),skip.end(),c) != skip.end())
                i--;
        }
        answer += c;
    }
    return answer;
}