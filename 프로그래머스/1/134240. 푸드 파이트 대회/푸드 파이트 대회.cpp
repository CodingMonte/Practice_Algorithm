#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string ranswer = "";
    for(int i = 1; i < food.size();i++)
    {
        int cnt = 0;
        if(food[i] % 2 == 0)
            cnt = food[i]/2;
        else
            cnt = (food[i]-1)/2;

        for(int j = 0;j < cnt;j++)
            answer += to_string(i);
    }
    ranswer = answer;
    reverse(ranswer.begin(),ranswer.end());
    
    return answer + "0" + ranswer;
}