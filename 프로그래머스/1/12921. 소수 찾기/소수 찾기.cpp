#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> prime(n,true);
    prime[0] = prime[1] = false;
    
    for(int i = 2; i <= n; i++)
        if(prime[i])
            for(int j = i+i; j <= n; j += i)
                prime[j] = false;
    
    for(int i = 2; i <=n;i++)
        if(prime[i]) 
            answer++;

    return answer;
}