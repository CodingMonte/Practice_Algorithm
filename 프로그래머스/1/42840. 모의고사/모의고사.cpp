#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores(3,0);
    vector<int> idiot1 = {1, 2, 3, 4, 5};
    vector<int> idiot2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> idiot3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i = 0;i < answers.size();i++)
    {
        if(answers[i] == idiot1[i % idiot1.size()])
            scores[0]++;
        if(answers[i] == idiot2[i % idiot2.size()])
            scores[1]++;
        if(answers[i] == idiot3[i % idiot3.size()])
            scores[2]++;
    }
    int topScore = *max_element(scores.begin(), scores.end());
    
    for(int i = 0; i < 3; i++)
        if(scores[i] == topScore)
            answer.push_back(i + 1);

    return answer;
}