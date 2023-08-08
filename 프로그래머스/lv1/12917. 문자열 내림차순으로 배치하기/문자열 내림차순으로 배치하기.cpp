#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string small="",big="";
    for(char c : s)
    {
        if(c >= 'A' && c <= 'Z')
            small += c;
        else
            big += c;
    }
    sort(big.begin(),big.end(),greater<char>());
    sort(small.begin(),small.end(),greater<char>());
    answer += big + small;
    return answer;
}