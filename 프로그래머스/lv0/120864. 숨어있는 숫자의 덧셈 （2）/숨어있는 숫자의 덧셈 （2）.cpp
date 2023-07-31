#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str) {
    int answer = 0;
    int temp = 0, flag = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            if(temp == 0)
                temp = (int)(str[i] - '0');
            else
                temp = temp*10 + (int)(str[i] - '0');
            if(!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                flag = 1;
            if(i + 1 == str.size())
                answer += temp;
        }
        else if(flag == 1)
        {
            answer += temp;
            temp = 0;
            flag = 0;
        }
    }
    return answer;
}