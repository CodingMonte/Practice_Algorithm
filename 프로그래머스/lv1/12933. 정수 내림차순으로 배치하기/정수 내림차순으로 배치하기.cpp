#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> temp;
        
    while(1)
    {        
        temp.push_back(n % 10);
        n /= 10;
        if(n < 1)
            break;
    }
    sort(temp.begin(),temp.end(),greater<long long>());
    for(long long num : temp)
    {
        answer += num;
        answer *= 10;
    }
    answer /= 10;
    return answer;
}