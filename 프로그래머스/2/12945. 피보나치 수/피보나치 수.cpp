#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;
bool flag = true;

int solution(int n) {
    if (n <= 1) {
        return n;
    }
    if(flag)
    {
        flag = false;
        memo = vector<int>(n+1,-1);
    }
    
    if (memo[n] != -1) {
        return memo[n]%1234567;
    }

    memo[n] = solution(n - 1) + solution(n - 2);

    return memo[n]%1234567;
}