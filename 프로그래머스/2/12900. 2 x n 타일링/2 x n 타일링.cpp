#include <string>
#include <vector>
#include <iostream>

#define MOD 1000000007

using namespace std;

// 모듈러 역원 구하기
long long modInverse(long long a, long long p) {
    long long result = 1, power = p - 2;
    while (power) {
        if (power % 2) result = (result * a) % p;
        a = (a * a) % p;
        power /= 2;
    }
    return result;
}

vector<long long> factorial(int n) {
    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    return fact;
}

int solution(int n) {
    int answer = 0;
    int m = n / 2 + 1;
    int two, one;

    if ((n & 1) == 0) {
        two = n / 2;
        one = 0;
    } else {
        two = n / 2;
        one = 1;
    }

    vector<long long> fact = factorial(n);

    for (int i = 0; i < m; i++) {
        long long num = fact[two + i + one];
        num = (num * modInverse(fact[two - i], MOD)) % MOD;
        num = (num * modInverse(fact[one + 2 * i], MOD)) % MOD;
        
        answer = (answer + num) % MOD;
    }

    return answer;
}
