#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    
    if(balls == share)
        return 1;
    long long answer = 1;
    int j = 1;
    
    for(int i = share + 1; i <= balls; i++)
    {
        answer *= i;
        if(j <=balls - share && answer % j == 0)
        {
            answer /= j;
            j++;
        }    
    }
    if(j < balls-share)
        for(;j <= balls-share;j++)
        {
            answer /= j;
        }
    
    return answer;
}