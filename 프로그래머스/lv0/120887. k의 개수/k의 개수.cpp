#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(;i<=j;i++)
    {
        int temp = 1;
        int num = i;
        while(num > 0)  
        {
            int digit = num % 10;
            if(digit == k)
                answer++;
            num /= 10;
        }
    }
    return answer;
}