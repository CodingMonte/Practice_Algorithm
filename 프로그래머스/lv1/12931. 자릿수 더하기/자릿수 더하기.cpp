#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string temp = to_string(n);
    
    for(char v : temp)
    {
        answer += (int)(v - '0');
    }
    return answer;
}