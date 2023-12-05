#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int count = log2(n);
    
    if(a > b) swap(a,b);
    
    while(n >= 2)
    {
        n /= 2;
        if(a <= n && b > n)
            return count;
        else if(a <= n && b <= n)
            count--;
        else if(a > n && b > n)
        {
            a -= n;
            b -= n;
            count--;
        }
    }
}