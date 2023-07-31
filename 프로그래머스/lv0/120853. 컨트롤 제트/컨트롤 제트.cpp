#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> result;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        result.push_back(word);
    }

    for(int i = 0; i < result.size(); i++)
    {
        if(result[i] != "Z")
            answer += stoi(result[i]);
        else
            answer -= stoi(result[i-1]);
    }

    return answer;
}