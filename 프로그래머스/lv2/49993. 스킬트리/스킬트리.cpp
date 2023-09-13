#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(string s : skill_trees)
    {
        int flag = 0;
        string temp = "";
        for(char v : s)
            if(find(skill.begin(),skill.end(),v) != skill.end())
                temp += v;
        for(int i = 0; i < temp.size(); i++)
            if(temp[i] == skill[i])
                flag++;
        if(flag == temp.size())
            answer++;
    }
    
    return answer;
}