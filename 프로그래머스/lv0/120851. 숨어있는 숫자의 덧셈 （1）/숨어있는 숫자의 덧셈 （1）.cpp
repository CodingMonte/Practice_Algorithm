#include <string>
#include <vector>

using namespace std;

int solution(string my) {
    int answer = 0;
    
    for(int i = 0; i < my.size(); i++)
    {
        if(my[i] >= '1' && my[i]<='9')
            answer += static_cast<int>(my[i] - '0');
    }
    return answer;
}