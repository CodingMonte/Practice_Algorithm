#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> num;
    
    for(int i = 0; i < clothes.size();i++)
    {
        num[clothes[i][1]]++;
    }
    for(auto v : num)
        answer *= (v.second + 1);
    return answer - 1;
}