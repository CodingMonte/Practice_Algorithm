#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool primeNum(long long num)
{
    if(num <= 1) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    
    for(long long i = 3; i <= sqrt(num); i += 2)
    {
        if(num % i == 0) return false;
    }
    return true;
}
int solution(int n, int k) 
{
    int answer = 0;
    long long result = 0;
    long long ten = 1;
    while(n > 0)
    {
        result = n % k * ten + result;
        ten *= 10;
        n /= k;
    }
    
    long long num = 0;
    ten = 1;
    while(result)
    {
        if(result % 10 != 0)
        {
            num += result % 10 * ten;
            ten *= 10;
        }
        else
        {
            if(num != 0)
            {
                if(primeNum(num))
                {
                    answer++;
                }
            }
            num = 0;
            ten = 1;
        }
        result /= 10;
    }
    if(primeNum(num))
    {
        answer++;
    }
    return answer;
}