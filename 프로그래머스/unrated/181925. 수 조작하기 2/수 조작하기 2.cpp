#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> num) {
    string answer = "";
    for(int i = 1; i < num.size(); i++)
    {
        if(num[i] - num[i - 1] == 1)
            answer += 'w';
        else if(num[i] - num[i - 1] == -1)
            answer += 's';
        else if(num[i] - num[i - 1] == 10)
            answer += 'd';
        else if(num[i] - num[i - 1] == -10)
            answer += 'a'; 
    }
    return answer;
}