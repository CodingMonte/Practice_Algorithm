#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    int i = 0;bool flag = true;
    map<string, int> check;
    for(; i < words.size(); i++)
    {
        check[words[i]]++;
        if(check[words[i]] == 2)
        {
            flag = false;
            break;
        }
        if(i < words.size()-1)
        {
            if(words[i][words[i].size() - 1] != words[i + 1][0])
            {
                flag = false;
                i++;
                break;
            }
        }
    }
    if(flag)
        return {0,0};
    else
        return {i % n + 1,i / n + 1};
}