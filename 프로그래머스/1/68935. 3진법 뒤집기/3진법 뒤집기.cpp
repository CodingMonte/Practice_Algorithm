#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary;
    while(n > 0)
    {
        ternary.push_back(n % 3);
        n /= 3;
    }
    int base3 = 1;
    for(int i = ternary.size(); i > 0;i--)
    {
        answer += ternary[i - 1] * base3;
        base3 *= 3;
    }
    return answer;
}