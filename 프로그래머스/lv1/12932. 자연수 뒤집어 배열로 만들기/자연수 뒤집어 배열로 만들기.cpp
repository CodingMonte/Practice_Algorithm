#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string temp = to_string(n);
    reverse(temp.begin(),temp.end());
    
    for(char v : temp)
    {
        answer.push_back((int)(v - '0'));
    }
    return answer;
}