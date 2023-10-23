#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++)
    {
        int cnt = 1;
        // 1.
        for(int j = 1;j <= i/2; j++)
            if(i % j == 0)
                cnt++;
        // 2.
        if((cnt & 1) == 0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}