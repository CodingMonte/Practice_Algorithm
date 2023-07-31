#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    
    int i = 1, no3 = 0;

    
    for(; i <= n + no3; i++)
    {
        int num = i;
        while(1)
        {
            if(num % 10 == 3 || i % 3 == 0)
            {
                no3++;
                break;
            }
            if(num / 10 == 0)
                break;
            else
                num /= 10;
        }
    }
    return n + no3;
}