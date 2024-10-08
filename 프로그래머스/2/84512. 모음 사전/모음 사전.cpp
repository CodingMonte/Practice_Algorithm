#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string word) {
    int answer = 0;
    vector<int> weight = {781,156,31,6,1};
    string vowel = "AEIOU";
    for(int i = 0; i < word.size();i++)
    {
        answer += vowel.find(word[i]) * weight[i] + 1;
    }
    return answer;
}