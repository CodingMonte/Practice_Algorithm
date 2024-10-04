#include <string>
#include <vector>


using namespace std;

int solution(string s) {
    
    int n = s.size();
    int answer = 0;
    int sign = 1;
    int i = 0;
    
    if(s[0] == '-' || s[0] == '+')
    {
        if(s[0] == '-')
            sign = -1;
        i = 1;
    }
    
    for(;i < n; i++)
    {
        answer = answer * 10 + s[i] - '0';
    }
    
    return answer * sign;
}