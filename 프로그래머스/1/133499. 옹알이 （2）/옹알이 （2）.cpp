#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> can = {"aya", "ye", "woo", "ma"};

bool Babbling(const string& s) {
    for (int i = 0; i < s.length(); ) 
    {
        bool valid = false;
        string temp;
        for (int j = 0; j < can.size();j++) 
        {
            if (s.substr(i, can[j].length()) == can[j]) 
            {
                if(temp == can[j])
                    return false;
                valid = true;
                i += can[j].length();
                temp = can[j];j--;
            }
        }
        if (!valid)
            return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;

    for (const string& s : babbling)
        if (Babbling(s))
            answer++;

    return answer;
}