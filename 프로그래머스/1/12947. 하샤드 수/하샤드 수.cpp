#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    
    int number = 0,n=10,temp = x;
    while(x % n != x) n *= 10;
    n /= 10;
    while(n > 0)
    {
        number += temp / n;
        temp %= n;
        n /= 10;
    }
    if(x % number == 0)
        return true;
    else
        return false;
    
}