#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int temp = 10;

    while (temp <= num)
        temp *= 10;
    while(temp >= 10)
    {
        num %= temp;
        answer++;
        temp /= 10;
        if (num / temp == k)
            return answer;
    }
    if (num / temp != k)
        return -1;
}