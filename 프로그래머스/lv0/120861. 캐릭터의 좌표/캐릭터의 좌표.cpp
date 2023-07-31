#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer ={0,0};
    for(string& v : keyinput)
    {
        if(     v == "left"  && answer[0] > -(board[0] - 1)/2)
            answer[0]--;
        else if(v == "right" && answer[0] <  (board[0] - 1)/2)
            answer[0]++;
        else if(v == "down"  && answer[1] > -(board[1] - 1)/2)
            answer[1]--;
        else if(v == "up"    && answer[1] <  (board[1] - 1)/2)
            answer[1]++;
    }
    return answer;
}