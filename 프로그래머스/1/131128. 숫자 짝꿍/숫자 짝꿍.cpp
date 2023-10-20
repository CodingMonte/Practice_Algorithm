#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) 
{
    unordered_map<char, int> countX, countY;
    string answer = "";
    
    for(char x : X)
        countX[x]++;
    for(char y : Y)
        countY[y]++;
    
    for (char x : X) 
    {
        if (countY.find(x) != countY.end() && countY[x] > 0) 
        {
            countY[x]--;
            if(answer == "0" && x == '0')
                continue;
            answer.push_back(x);
        }
    }
    if(answer == "")
        return "-1";
    sort(answer.rbegin(), answer.rend());

    return answer;
}