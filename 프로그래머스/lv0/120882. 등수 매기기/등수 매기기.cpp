#include <string>
#include <vector>
#include <algorithm>
#define all(x) x.begin(),x.end()

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<double> average;
    vector<double> number;
    
    for(int i = 0; i < score.size();i++)
    {
        average.push_back((((double)score[i][0] + (double)score[i][1])/2));
    }
    number = average;
    sort(all(number),greater<double>());

    vector<int> answer(average.size());
    
    for(int i = 0; i < average.size();i++)
    {
        auto idx = find(all(number),average[i]);
        int index = distance(number.begin(),idx);
        answer[i] = index + 1;
    }
    
    return answer;
}