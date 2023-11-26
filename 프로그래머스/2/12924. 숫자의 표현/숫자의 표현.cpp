#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    if((n & 1))
        answer++;
    
    for(int i = 3; i <= n/2; i += 2)
        if(!(n % i))
            answer++;
    
    return n == 1 ? 1 : answer;
}