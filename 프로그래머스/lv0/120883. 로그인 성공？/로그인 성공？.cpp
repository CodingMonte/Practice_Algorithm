#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    int flag = 0;
    for(int i = 0; i < db.size();i++)
    {
        if(id_pw[0] == db[i][0])
        {
            flag++;
            if(id_pw[1] == db[i][1])
                return "login";
            else
                return "wrong pw";
        }
    }
    if(flag == 0)
        return "fail";
    return answer;
}