#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int age) {
    string answer = "";
    if(age == 0)
        answer = 'a';
    while(age != 0)
    {
        answer += (char)(age % 10 + 97);
        age /= 10;
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}