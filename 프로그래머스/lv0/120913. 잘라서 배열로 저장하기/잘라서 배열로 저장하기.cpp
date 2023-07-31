#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp;
    int j = 0;
    for(int i = 0; j < my_str.size(); i++)
    {
        for(j = i*n; j < n*(i+1) && j < my_str.size(); j++)
            temp += my_str[j];
        answer.push_back(temp);
        temp.clear();    
    }
    return answer;
}