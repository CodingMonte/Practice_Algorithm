#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int order) {
    int answer = 0;
    string num = to_string(order);

    for(int i = 0; i < num.size();i++)
    {
        if(num[i] == '3' || num[i] == '6' || num[i] == '9')
            answer++;
    }
    return answer;
}