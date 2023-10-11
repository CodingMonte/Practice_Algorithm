#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;
int DateToDay(string year, string month, string day)
{
    int a = (stoi(year)) * 12*28;
    int b = (stoi(month)) * 28;
    int c = stoi(day);
    
    return a+b+c;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char,int> provision;
    for(string s : terms)
    {
        stringstream ss(s);
        char term;
        string month;
        ss >> term >> month;
        provision[term] = stoi(month);
    }
    
    int now = DateToDay(today.substr(2,2),today.substr(5,2),today.substr(8,2));
    
    for(int i = 0; i < privacies.size();i++)
    {
        int enrolled = DateToDay(privacies[i].substr(2,2),privacies[i].substr(5,2),privacies[i].substr(8,2));
        int plus_day = provision[privacies[i][privacies[i].size() - 1]] * 28;
        if(now >= enrolled + plus_day)
            answer.push_back(i+1);
    }
    return answer;
}