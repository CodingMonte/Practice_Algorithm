#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    int i , j, flag = 0;
    for(i = 0; i < dic.size(); i++)
    {
        for(j = 0; j < spell.size();j++)
        {
            if(dic[i].find(spell[j]) == string::npos)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            answer = 1;
        else
            flag = 0;
    }
    return answer;
}