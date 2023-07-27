#include <string>
#include <vector>

using namespace std;

string solution(string str) {
    string answer = "";
    for(int i = 0; i < str.size();i++)
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            answer += str[i];
    return answer;
}